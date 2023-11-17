/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:24:37 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/16 20:10:18 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {
	PhoneBook phonebook;

	std::string input;
	std::cout << GRN << "\nWhat do u want form me?: " << std::endl;
	while (1)
	{
		std::cout << CYN << "\n1. ADD:    > to add info to contact" << std::endl;
		std::cout << CYN << "2. SEARCH: > to search for a contact" << std::endl;
		std::cout << CYN << "3. EXIT:   > close the phonebook\n" << reset << std::endl;
		std::cout << CYN << "\nInsert command\n>> ";
		if (!std::getline(std::cin, input))
			return (0);
		input = phonebook.inputCheck(input);
		std::cout << "after: " << input << "\n";
		if (input == "ADD")
			phonebook.addContactInfo();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break;
		else {
			std::cout << BRED << std::endl;
			std::cout << ".-. .-. .  . .  . .-. . . .-.   . . .-. .-.   .-. .-. . . . . .-. " << std::endl;
			std::cout << "|   | | |\\/| |\\/| |-| |\\| |  )  |\\| | |  |    |-  | | | | |\\| |  )" << std::endl;
			std::cout << "`-' `-' '  ` '  ` ` ' ' ` `-'   ' ` `-'  '    '   `-' `-' ' ` `-' " << reset << std::endl;
		}
	}
	
}
