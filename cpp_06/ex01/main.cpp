/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:27:45 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/12 18:28:16 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data *data = new Data;
	data->str = "Hello World!";
	data->n = 42;

	std::cout << "Str: " << deserialize(serialize(data))->str << std::endl;
	std::cout << "N: " << deserialize(serialize(data))->n << std::endl;

	delete data;

	return (0);
}
