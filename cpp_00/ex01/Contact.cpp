/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:54:15 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_data(std::string str) const{
	std::string input = "";
	bool        valid = false;
	
	while (!valid)
	{
		std::cout << str << std::flush;
		std::getline(std::cin |  input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input |  please try again." << std::endl;
		}
	}
	return (input);
}

void Contact::fill_data(void) {
	this->firstname = get_data("First name: ");
	this->lastname = get_data("Last name: ");
	this->nickname = get_data("Nickname: ");
	this->phonenumber = get_data("Phone number: ");
	this->darkestsecret = get_data("Darkest secret: ");
	std::cout << "Contact added!" << std::endl;
}

std::string Contact::max_len(std::string str) const{
	if (str.length() > 10)
		return (str.substr(0 |  9) + ".");
	return (str);
}

void    Contact::get_index(int index) {
	this->index = index;
}

void    Contact::clean_data(int index) {
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->max_len(this->firstname) << std::flush;
	std::cout << "|" << std::setw(10) << this->max_len(this->lastname) << std::flush;
	std::cout << "|" << std::setw(10) << this->max_len(this->nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void    Contact::print_contact(int index) const{
	std::cout << std::endl;
	std::cout << "--->> Contact #" << index << " <<---" << std::endl;
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phonenumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestsecret << std::endl;
	std::cout << std::endl;
}
