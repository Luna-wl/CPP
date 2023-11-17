/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:51:04 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/16 20:04:40 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContactInfo() {
	Contact contact;
	static int i = 0;
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string dark;
	
	std::cout << BMAG << "\nPlease add info: " << std::endl;
	std::cout << BGRN << "First name: " << reset;
	if (!std::getline(std::cin, first))
		return;

	std::cout << BGRN << "Last name: " << reset;
	if (!std::getline(std::cin, last))
		return;

	std::cout << BGRN << "Nick name: " << reset;
	if (!std::getline(std::cin, nick))
		return;

	std::cout << BGRN << "Phonenumber: " << reset;
	if (!std::getline(std::cin, phone))
		return;
	if (!checkDigit(phone)) {
		std::cout << RED << "\n==============================================" << std::endl;
		std::cout << RED << " " << BYEL << "You input must be digit only, OK? ( ´-ω-` ) " << RED << " " << std::endl;
		std::cout << RED << "==============================================" << std::endl;
		addContactInfo();
		return;
	}

	std::cout << BGRN << "Darkest secret: " << reset;
	if (!std::getline(std::cin, dark))
		return;

	if (first == "" || last == "" || nick == "" || phone == "" | dark == "") {
		std::cout << RED << "\n.------------------------------." << std::endl;
		std::cout << RED << "| " << BYEL << "Please insert data ʕっ•ᴥ•ʔっ" << RED << " |" << reset << std::endl;
		std::cout << RED << "'------------------------------'" << std::endl;
		addContactInfo();
		return;
	}

	contact.initContact(first, last, nick, phone, dark);

	this->contact[i] = contact;
	i++;
	if (i > 7)
		i = 0;
}

void PhoneBook::showContact() {
	std::string i;
	int index;

	std::cout << GRN <<"\n.------------------------------." << std::endl;
	std::cout << GRN <<"|" << BYEL << " Who are you looking for? o_O " << GRN << "|" << std::endl;
	std::cout << GRN <<"'------------------------------'" << std::endl;
	std::cout << GRN << "\n>> ";
	if (!std::getline(std::cin, i))
		return;
	if (!checkDigit(i)) {
		std::cout << std::endl;
		std::cout << MAG << "«⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃»" << std::endl;
		std::cout << MAG << "|" << BRED << "   Integer ONLY (つ▀¯▀ )つ   " << MAG << "|" << std::endl;
		std::cout << MAG << "«⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃⁃»" << std::endl;
		showContact();
		return;
	}
	index = stoi(i);
	if (index < 0 || index > 7) {
		std::cout << YEL <<"••••••••••••••••••••••••••••••••••••••••••••" << std::endl;
		std::cout << YEL << "•  " << BRED << "There's no data about who u search ಠ_ಠ  " << YEL << "•" << reset << std::endl;
		std::cout << YEL <<"••••••••••••••••••••••••••••••••••••••••••••" << std::endl;
		showContact();
		return;
	}
	this->printContact(index);
}

void PhoneBook::showContactAll() {
	std::cout << RED << "•---------•-------------------------------------------------------------------•" << reset << std::endl;
	std::cout << RED << "|  " << BGRN << "Index" << RED << "  |    ";
	std::cout << BGRN << "\tFirstname" << "     |   " << BGRN << "Lastname" << "    |    " << BGRN << "Nickname" << RED << "   " << "|  " << BGRN << "Phonenumber" << RED << "  " << "|" << reset << std::endl;
	std::cout << RED << ":---------+-------------------------------------------------------------------:" << reset << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << RED << "|    " << GRN << i << RED << "    |    " << GRN;
		std::cout << std::setfill(' ') << std::right << std::setw(15) << contact[i].getFirstAll() << RED << "|" << GRN;
		std::cout << std::setfill(' ') << std::right << std::setw(15) << contact[i].getLastAll() << RED << "|" << GRN;
		std::cout << std::setfill(' ') << std::right << std::setw(15) << contact[i].getNickAll() << RED << "|" << GRN;
		std::cout << std::setfill(' ') << std::right << std::setw(15) << contact[i].getPhoneAll() << RED << "|" << std::endl;
		if (i < 7)
		std::cout << RED << ":---------+-------------------------------------------------------------------:" << reset << std::endl;
	}
	std::cout << RED << "•---------•-------------------------------------------------------------------•" << reset << std::endl;
}
