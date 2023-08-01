/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:04 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 17:42:02 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* Doggo = new Dog();
	const Animal* Kittycat = new Cat();
	const WrongAnimal* Monster = new WrongCat();

	std::cout << std::endl;


	std::cout << "Doggo is a " << Doggo->getType() << std::endl;
	std::cout << "Kittycat is a " << Kittycat->getType() << std::endl;
	std::cout << "Monster is a " << Monster->getType() << std::endl;

	std::cout << std::endl;

	Kittycat->makeSound();
	std::cout << std::endl;
	Doggo->makeSound();
	std::cout << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	Monster->makeSound();

	std::cout << std::endl;

	delete meta;
	delete Doggo;
	delete Kittycat;
	delete Monster;

	return (0);
}