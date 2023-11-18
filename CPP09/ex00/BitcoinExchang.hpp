#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <utility>
#include <exception>

enum Month {
	January = 1,  // Start from 1 if you want January to represent 1
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

class BitcoinExchange {
	private:
		std::map<int, std::pair<std::string, double> > _input;
		std::map<std::string, double> _data;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange &operator=(const BitcoinExchange&);

		void readBitcoinPrices(const std::string& filename);
		void readInput(const std::string& filename);

		double convertBTC( std::string date );
		bool checkLeapYear( int date );
		bool checkDate( std::string date );

		void runExchange( std::string file );

	class FileCannotOpen : public std::exception {
		const char * what () const throw () {
			return "Bitcoin file cannot open!";
		}
	};
};
