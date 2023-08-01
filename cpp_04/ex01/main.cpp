/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:04 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 18:44:00 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* NoasAnimals[10];
	for(int i = 0; i < 5; i++)
		NoasAnimals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		NoasAnimals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete NoasAnimals[i];
	return (0);
}