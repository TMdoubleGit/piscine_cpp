/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:22:28 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/25 16:19:15 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stack>
# include <cmath>

class RPN
{
	private:
		std::string _left_args;

	public:
		RPN();
		RPN(RPN const & src);
		~RPN();
		RPN &operator=(RPN const & ref);
		
		bool	isOperator(std::string const & str);
		bool	isNumber(std::string const & str);
};


#endif