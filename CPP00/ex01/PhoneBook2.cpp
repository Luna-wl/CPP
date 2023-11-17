/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 23:41:48 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/16 20:10:00 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << RED << "\n  ^~^  ,                   " << std::endl;
	std::cout << RED << " ('Y') )                   " << std::endl;
	std::cout << RED << " /   \\/  " << BCYN << "WELCOME TO PHONEBOOK  " << reset << std::endl;
	std::cout << RED << "(\\|||/)              " << reset << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << RED << "                      __    " << std::endl;
	std::cout << RED << "(\\,------------------'()'--o" << std::endl;
	std::cout << RED << " (_    _  " << BYEL << " BYE~" << RED << "  _    /~\" " << std::endl;
	std::cout << RED << "  (_)_)            (_)_)    \n" << std::endl;
}

int PhoneBook::checkDigit( std::string phone ) {
	for (int i = 0; phone[i]; i++) {
		if (!isdigit(phone[i]))
			return (0);
	}
	return (1);
}

void PhoneBook::header() {
	std::cout << YEL << "\n\t\t         ___                       ___  " << std::endl;
	std::cout << YEL << "\t\t        (o o)                     (o o) " << std::endl;
	std::cout << YEL << "\t\t       (  V  ) "<< BCYN << "Phonebook Contact"<< YEL << " (  V  )" << std::endl;
	std::cout << YEL << "\t\t       --m-m-----------------------m-m--" << reset << std::endl;
}

void PhoneBook::printContact( int index ) {
	std::cout << MAG << "\n•-----------------•---------------------•" << reset << std::endl;
	std::cout << MAG << "|  " << BYEL << "Index" << MAG << "          |                    " << YEL << index << MAG << "|" << reset << std::endl;
	std::cout << MAG << ":-----------------+---------------------:" << reset << std::endl;

	std::cout << MAG << "|  "  << BYEL << "Firstname"  << MAG << "      |" << YEL;
	std::cout << std::setfill(' ') << std::right << std::setw(21) << contact[index].getFirst() << MAG << "|" << std::endl;
	std::cout << MAG << ":-----------------+---------------------:" << std::endl;

	std::cout << MAG << "|  " << BYEL << "Lastname" << MAG << "       |" << YEL;
	std::cout << std::setfill(' ') << std::right << std::setw(21) << contact[index].getLast() << MAG "|" << std::endl;
	std::cout << MAG << ":-----------------+---------------------:" << reset << std::endl;
	
	std::cout << MAG << "|  " <<  BYEL << "Nickname" << MAG << "       |" << YEL;
	std::cout << std::setfill(' ') << std::right << std::setw(21) << contact[index].getNick() << MAG "|" << std::endl;
	std::cout << MAG << ":-----------------+---------------------:" << reset << std::endl;

	std::cout << MAG << "|  " <<  BYEL << "Phonenumber" << MAG << "    |" << YEL;
	std::cout << std::setfill(' ') << std::right << std::setw(21) << contact[index].getPhone() << MAG "|" << std::endl;
	std::cout << MAG << ":-----------------+---------------------:" << reset << std::endl;

	std::cout << MAG << "|  " <<  BYEL << "Darkest Sercet" << MAG << " |" << YEL;
	std::cout << std::setfill(' ') << std::right << std::setw(21) << contact[index].getDark() << MAG "|" << std::endl;
	std::cout << MAG << "•-----------------•---------------------•" << reset << std::endl;
}

void PhoneBook::search() {
	this->header();
	this->showContactAll();
	this->showContact();
}

std::string PhoneBook::inputCheck( std::string input ) {
	for (int i = 0; i < input.length(); i++) {
		if (input[i] >= 'a' && input[i] <= 'z') 
			input[i] = toupper(input[i]);
	}
	return (input);
}
