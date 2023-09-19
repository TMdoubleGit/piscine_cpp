/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:16:11 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 15:51:04 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <exception>
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, int> _wallet;
	
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange();
		BitcoinExchange &operator=(BitcoinExchange const & ref);
		
		bool	checkDate(std::string const & str);
		bool	checkValue(std::string const & str);
		class InvalidDateException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Bad input => "); };
		};
		class ValueTooBigException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Too large number"); };
		};
		class NegativeValueException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Not a positive number"); };
		};
		}
		
}

#endif