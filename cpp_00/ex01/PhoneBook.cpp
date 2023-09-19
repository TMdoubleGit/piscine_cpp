/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:47:33 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::display_notice(void) const{
	std::cout << "Welcome to your phonebook!" << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter one of the following commands:" << std::endl;
	std::cout << "ADD: Add a new contact" << std::endl;
	std::cout << "SEARCH: Search for a contact" << std::endl;
	std::cout << "EXIT: Exit the phonebook" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::add_contact(void){
	static int	index;
	this->contacts[index % 8].fill_data();
	this->contacts[index % 8].get_index(index % 8);
	index++;
}

void	PhoneBook::display_all(void) {
	int	i;

	i = -1;
	std::cout << "-------------PhoneBook's contacts-------------" << std::endl;
	while(++i < 8)
			this->contacts[i].clean_data(i);
	std::cout << std::endl;
}

int	PhoneBook::read_index(void) const{
	int	index;
	bool	valid = false;

	while (!valid)
	{
		std::cout << "Please enter the index of the contact you wish to view: " << std::flush;
		std::cin >> index;
		if (std::cin.good() && index >= 0 && index <= 7)
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max() | '\n');
			std::cout << "Invalid input |  please try again." << std::endl;
		}
	}
	return (index);
}

void	PhoneBook::search_cmd(void) const{
	int	index = this->read_index();
	this->contacts[index].print_contact(index);
	std::cin.clear();
	std::cin.ignore();
}