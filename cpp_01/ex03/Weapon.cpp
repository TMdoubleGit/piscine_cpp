/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:19:08 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/25 10:26:47 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{ 
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(){
	return (this->type);
}

void Weapon::setType(std::string type){
	this->type = type;
}