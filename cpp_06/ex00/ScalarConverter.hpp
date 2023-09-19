/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:27:34 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/04 14:37:09 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <fstream>
# include <climits>
# include <sstream>

enum	input_type
{
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	LITERAL
};

class ScalarConverter
{
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;
		
		bool	_impossible;

		std::string	_str;
		input_type	_type;
		
	public:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter(void);
		
		ScalarConverter &operator=(ScalarConverter const &ref);

		char		getC() const;
		void		setC(char c);

		int			getI() const;
		void		setI(int i);

		float		getF() const;
		void		setF(float f);

		double		getD() const;
		void		setD(double d);

		void		convert();

		std::string	getStr() const;
		void		setStr(std::string str);

		input_type	getType() const;
		void		setType();

		bool		isChar();
		bool		isInt();
		bool		isFloat();
		bool		isDouble();
		
		bool		isImpossible();
		bool 		isLiteral() const;

		void		printChar() const;
		void		printInt() const;
		void		printFloat() const;
		void		printDouble() const;

		class ConverterException : public std::exception
		{
			virtual const char *what() const throw() {return "Unknown type";}
		};
};

std::ostream	&operator<<(std::ostream &out, ScalarConverter const &ref);

#endif