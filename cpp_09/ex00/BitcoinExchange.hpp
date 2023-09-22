/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:16:11 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/22 16:52:09 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
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
		
};

		bool	checkDate(std::string const & str);
		bool	checkValue(std::string const & str);
		
		class BTCreationException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Error: Bitcoin wasn't even created, yet !"); };
		};
		class BadInputException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Error: Bad input => "); };
		};
		class ValueTooBigException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Error: Too large number."); };
		};
		class NegativeValueException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Error: Not a positive number."); };
		};
		
#endif