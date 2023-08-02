/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:33:44 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:06:32 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal " << type << " constructor called" << std::endl;
}

Animal::Animal( const Animal &ref )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = ref;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=( const Animal &ref )
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

std::string	Animal::getType() const
{	
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "A random animal makes an indescribable sound : [...]" << std::endl;
}