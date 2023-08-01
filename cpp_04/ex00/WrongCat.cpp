/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:00 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 17:32:30 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Random scientist: Who's been a good cat?" << std::endl;
	std::cout << this->_type << ": Woof" << std::endl;
}