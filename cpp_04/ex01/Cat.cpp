/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:09 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 18:44:26 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->_type << " constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << this->_type << " destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "No one can hear you meow in space" << std::endl;
	std::cout << this->_type << ": Miaou" << std::endl;
}