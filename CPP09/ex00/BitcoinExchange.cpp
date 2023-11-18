#include "BitcoinExchang.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& s) {
	*this = s;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& s) {
	if (this != &s) {
		_input = s._input;
	}
	return *this;
}

void BitcoinExchange::readBitcoinPrices(const std::string& file) {
	double price;
	std::ifstream in;
	std::string line, date;

	in.open(file, std::fstream::in);
	if (!in)
		throw FileCannotOpen();
	getline(in, line);
	while (getline(in, line)) {
		std::istringstream iss(line);
		getline(iss, date, ',');
		iss >> price;
		_data[date] = price;
	}
}

void BitcoinExchange::readInput(const std::string& file) {
	std::ifstream in;
	std::string line, date, price;
	int	index = 0;
	char *end;

	in.open(file, std::fstream::in);
	if (!in)
		throw FileCannotOpen();
	getline(in, line);
	while (getline(in, line)) {
		std::istringstream iss(line);
		getline(iss, date, '|');
		getline(iss, price, '|');
		double priceD = std::strtod(price.c_str(), &end);
		date.erase( date.find_last_not_of( " " ) + 1 );
		price = "";
		_input[index++] = std::make_pair(date, priceD);
	}
}

bool BitcoinExchange::checkDate( std::string date ) {
	int year = std::atoi( date.substr( 0, 4 ).c_str() );
	int month = std::atoi( date.substr( 5, 2 ).c_str() );
	int day = std::atoi( date.substr( 8, 2 ).c_str() );

	if (month < 1 || month > 12 || year < 0 || day < 1 || day > 31)
		return (false);
	int dayMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == February && checkLeapYear(year)) {
		dayMonth[1] = 29;
	}
	if (day > dayMonth[month - 1])
		return (false);
	return (true);
}

bool BitcoinExchange::checkLeapYear( int year ) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;  // Divisible by 400, hence leap year
			}
			return false;  // Divisible by 100 but not by 400, not a leap year
		}
		return true;  // Divisible by 4 but not by 100, leap year
	}
	return false;  // Not divisible by 4, not a leap year
}

double BitcoinExchange::convertBTC( std::string date ) {
	std::map<std::string, double>::iterator it = _data.begin();
	while (it != _data.end()) {
		std::string day = it->first;
		if (day == date) {
			return it->second;
		}
		it++;
	}
	std::map<std::string, double>::iterator its = _data.lower_bound(date);
	if (its != _data.end()){
		if (its->first == "2009-01-02") {
			return  its->second;
		}
		else {
			--its;
			return  its->second;
		}
	}
	return 0;
}

void BitcoinExchange::runExchange( std::string file ) {
	readInput(file);
	readBitcoinPrices("data.csv");
	for ( std::map< int, std::pair<std::string, double> >::iterator it = _input.begin(); it != _input.end(); it++ ) {
		std::string date = it->second.first;
		double bc = it->second.second;
		if (checkDate(date) == false) {
			std::cout << "Error: bad input => " << date << std::endl;
			continue;
		}
		else if (bc < 0) {
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		else if (bc > 1000) {
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		double price = convertBTC(date);
		std::cout << date << " => " << bc << " = " << bc * price << std::endl;
	}
}
