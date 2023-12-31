/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:48:05 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 15:13:49 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const &type) : AMateria("ice")
{
}

Ice::Ice(Ice const &ref) : AMateria(ref)
{
	*this = ref;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}