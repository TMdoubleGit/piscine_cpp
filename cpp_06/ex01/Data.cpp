/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:11:56 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/12 18:26:59 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

Data *deserialize(uintptr_t ptr)
{
	return (reinterpret_cast<Data *>(ptr));
}
