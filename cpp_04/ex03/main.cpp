/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:19:51 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 15:35:17 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* john = new Character("John");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	john->equip(tmp);
	tmp = src->createMateria("cure");
	john->equip(tmp);

	ICharacter* jack = new Character("Jack");

	john->use(0, *jack);
	john->use(1, *jack);

	delete jack;
	delete john;
	delete src;

	return 0;
}