#include <iostream>
#include <fstream>
#include "color.hpp"

void replaceStr( std::string &str, std::string s1, std::string s2 ) {
	int pos = str.find(s1); // Find the position of s1 default pos == 0
	// loop until s1 not found.
	// npos => until the end of the string.
	while (pos != std::string::npos) {
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1, pos + s2.length()); // find the next s1 after replace s2
	}
}

int main( int ac, char **av) {
	std::ifstream in;
	std::ofstream out;
	std::string s1, s2;

	if (ac != 4) {
		std::cout << RED << "You insert incorrect argument" << std::endl;
		return (0);
	}
	s1 = av[2];
	s2 = av[3];
	// open infile
	in.open(av[1], std::fstream::in);
	if (!in) {
		std::cout << RED << "Error from open file" << std::endl;
		return (0);
	}
	// open replacefile
	std::string replaceFile = (std::string)av[1] + ".replace";
	out.open(replaceFile, std::fstream::out);
	if (!out) {
		std::cout << RED << "Error from open replace file" << std::endl;
		in.close();
		return (0);
	}
	// copy to replace by line
	std::string line;
	while (getline(in, line)) {
		replaceStr(line, s1, s2);
		out << line << std::endl;
	}
	// close file
	in.close();
	out.close();
	return (0);
}
