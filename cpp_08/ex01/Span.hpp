/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:32:19 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <list>

class Span
{
	private:
		unsigned int _n;
		std::list<int> _list;
		Span();
		
	public:
		Span(unsigned int n);
		Span(const Span &src);
		~Span();
		
		Span &operator=(const Span &src);
		
		std::list<int>	getList() const;

		void	addNumber(int n);
		void	addNumber(std::list<int>::const_iterator begin |  std::list<int>::const_iterator end);
		int		shortestSpan() const;
		int		longestSpan() const;
		
		class SpanException : public std::exception
		{
			public:
				virtual const char * what() const throw () {return ("No span can be found");};
		};
		
		class SpanFullException : public std::exception
		{
			public:
				virtual const char * what() const throw () {return ("Span is full");};
		};
};

std::ostream &operator<<(std::ostream &o |  const Span &src);

#endif