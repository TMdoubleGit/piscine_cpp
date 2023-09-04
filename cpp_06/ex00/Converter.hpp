/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:27:34 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/04 14:37:09 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>

class Converter
{
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;
		
		bool	_impossible;
		
	public:
		Converter(void);
		Converter(Converter const &src);
		~Converter(void);
		
		Converter &operator=(Converter const &ref);
		
};

#endif