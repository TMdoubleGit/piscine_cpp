/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:33:47 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:13:02 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "WrongAnimal " << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &ref )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = ref;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &ref )
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes an indescribable sound : [...]" << std::endl;
}