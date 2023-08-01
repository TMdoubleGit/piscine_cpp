/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:11 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 17:33:00 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void	Dog::makeSound() const
{
    std::cout << "Random guy: Who's been good boi ?" << std::endl;
    std::cout << this->_type << ": Woof" << std::endl;
}