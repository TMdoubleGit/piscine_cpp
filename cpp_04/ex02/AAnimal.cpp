/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:33:44 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:18:43 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal " << type << " constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &ref)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = ref;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &ref)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

std::string	AAnimal::getType() const
{	
	return (this->_type);
}

