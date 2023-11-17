/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <Warintorn_L@outlook.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:20:27 by wluedara          #+#    #+#             */
/*   Updated: 2023/05/16 19:58:57 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

std::string Contact::getFirst() {
	return (this->firstname);
}

std::string Contact::getLast() {
	return (this->lastname);
}

std::string Contact::getNick() {
	return (this->nickname);
}

std::string Contact::getPhone() {
	return (this->phonenumber);
}

std::string Contact::getDark() {
	return (this->darkestSecret);
}

void Contact::initContact( std::string first, std::string last, std::string nick, std::string phone, std::string dark ) {
	this->firstname = first;
	this->lastname = last;
	this->nickname = nick;
	this->phonenumber = phone;
	this->darkestSecret = dark;
}

std::string Contact::getFirstAll() {
	if (this->firstname.length() > 10)
		return (this->firstname.substr(0,10) + ".");
	return (this->firstname);
}

std::string Contact::getLastAll() {
	if (this->lastname.length() > 10)
		return (this->lastname.substr(0,10) + ".");
	return (this->lastname);
}

std::string Contact::getNickAll() {
	if (this->nickname.length() > 10)
		return (this->nickname.substr(0,10) + ".");
	return (this->nickname);
}

std::string Contact::getPhoneAll() {
	if (this->phonenumber.length() > 10)
		return (this->phonenumber.substr(0,10) + ".");
	return (this->phonenumber);
}
