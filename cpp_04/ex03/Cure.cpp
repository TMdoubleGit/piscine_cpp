/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:51:14 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 12:52:59 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const &type) : AMateria(type)
{
}

Cure::Cure(Cure const &ref) : AMateria(ref)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}