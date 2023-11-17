#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
	public:
		PhoneBook();
		~PhoneBook();

		void addContactInfo();
		void showContact();
		void showContactAll();
		void header();
		void search();
		int  checkDigit( std::string phone );
		void printContact( int index );
		std::string inputCheck( std::string input );
};

#endif