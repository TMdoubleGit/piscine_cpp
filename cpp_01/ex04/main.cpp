/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:16:15 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"

int	main(int ac |  char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	ft_sed	sed(av[1]);
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: empty string" << std::endl;
		return (1);
	}
	sed.ft_replace(av[2] |  av[3]);
	return (0);
}