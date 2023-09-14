/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:11:27 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/13 17:26:57 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, int len, void (*f)(T const &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
	return ;
}

template <typename T>
void	print(T &x)
{
	std::cout << x << std::endl;
}

#endif