/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:12:46 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 15:12:08 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "default";
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
	std::cout << "AMateria " << _type << " constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &ref)
{
	*this = ref;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &ref)
{
	_type = ref._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses the ability " << _type << " on " << target.getName() << " *" << std::endl;
}
