/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:28:50 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:09:46 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain has been created" << std::endl;
}

Brain::Brain( const Brain &ref )
{
    std::cout << "Brain has been copied" << std::endl;
    *this = ref;
}

Brain::~Brain()
{
    std::cout << "Brain has been destroyed" << std::endl;
}

Brain   &Brain::operator=( const Brain &ref )
{
    std::cout << "Brain has been assigned" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = ref._ideas[i];
    return (*this);
}