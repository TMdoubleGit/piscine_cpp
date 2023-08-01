/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:11 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 19:17:13 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void	Dog::makeSound() const
{
    std::cout << "Random guy: Who's been good boi ?" << std::endl;
    std::cout << this->_type << ": Woof" << std::endl;
}