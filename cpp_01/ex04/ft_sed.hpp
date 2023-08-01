/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:14:08 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/25 14:26:45 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SED_HPP
# define FT_SED_HPP

# include <iostream>
#include <fstream>

class ft_sed
{
	private:
		std::string infile;
		std::string outfile;
	
	public:
		ft_sed(std::string filename);
		~ft_sed();
		void	ft_replace(std::string s1, std::string s2);
};

#endif