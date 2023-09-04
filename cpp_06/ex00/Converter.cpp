/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:27:42 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/04 14:32:58 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(void)
{
	return ;
}

Converter::Converter(Converter const &src)
{
	*this = src;
	return ;
}

Converter::~Converter(void)
{
	return ;
}

Converter &Converter::operator=(Converter const &ref)
{
	(void)ref;
	return (*this);
}

