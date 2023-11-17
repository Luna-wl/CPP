#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Colour.hpp"

class Contact {
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();

		std::string getFirst();
		std::string getLast();
		std::string getNick();
		std::string getPhone();
		std::string getDark();

		std::string getFirstAll();
		std::string getLastAll();
		std::string getNickAll();
		std::string getPhoneAll();

		void initContact( std::string first, std::string last, std::string nick, std::string phone, std::string dark );
};

#endif