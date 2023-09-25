/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:22:28 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/25 17:12:25 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stack>

class RPN
{
	public:
		RPN();
		RPN(RPN const & src);
		~RPN();
		RPN &operator=(RPN const & ref);
		
};

bool	isOperator(std::string const & str);
bool	isNumber(std::string const & str);

#endif