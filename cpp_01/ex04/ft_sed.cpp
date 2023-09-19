/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:16:40 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"

ft_sed::ft_sed(std::string filename)
{
	this->infile = filename;
	this->outfile = filename + ".replace";
}

ft_sed::~ft_sed()
{
}

void	ft_sed::ft_replace(std::string s1 |  std::string s2)
{
	std::ifstream	ifs(this->infile);
	std::ofstream	ofs(this->outfile);
	std::string		line;

	if (!ifs.is_open() || !ofs.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	while (std::getline(ifs |  line))
	{
		std::string new_line;
		size_t start = 0;
		while (true)
		{
			size_t pos = line.find(s1 |  start);
			if (pos == std::string::npos)
			{
				new_line += line.substr(start);
				break ;
			}
			else
			{
				new_line += line.substr(start |  pos - start) + s2;
				start = pos + s1.length();
			}
		}
		ofs << new_line << std::endl;
	}
	ifs.close();
	ofs.close();
}