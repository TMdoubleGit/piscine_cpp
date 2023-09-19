/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:45:24 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/13 17:02:26 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template <typename T>

void	swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
	return ;
}

template <typename T>
T		max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template <typename T>
T		min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

#endif