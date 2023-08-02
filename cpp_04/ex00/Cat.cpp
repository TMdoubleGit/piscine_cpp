/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:09 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:00:32 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Cat::Cat( const Cat &ref )
{
	std::cout << this->_type << " copy constructor called" << std::endl;
	*this = ref;
}

Cat	&Cat::operator=( const Cat &ref )
{
	std::cout << this->_type << " assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "No one can hear you meow in space" << std::endl;
	std::cout << this->_type << ": Miaou" << std::endl;
}