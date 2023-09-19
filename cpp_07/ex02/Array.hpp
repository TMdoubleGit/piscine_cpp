/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:56:48 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class   Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array()
		{
			_array = new T[0];
			_size = 0;
		};
		
		Array(unsigned int n)
		{
			_array = new T[n];
			_size = n;
			for (unsigned int i (0); i < _size; i++)
				_array[i] = 0;
		};
		
		Array(Array const & src)
		{
			_array = new T[src._size];
			_size = src._size;
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];	
		}
		
		~Array()
		{
			delete [] _array;
		};

		Array & operator=(Array const & rhs)
		{
			if (this != &rhs)
			{
				delete [] _array;
				_array = new T[rhs._size];
				_size = rhs._size;
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		};

		T &operator[](unsigned int i) const
		{
			if (i >= _size)
				throw OOBexception();
			return (_array[i]);
		};
		
		unsigned int	size() const
		{
			return (_size);
		};

		class OOBexception : public std::exception
		{
			public:
				virtual const char * what() const throw () {return "Out of bounds";};
		};
};

template <typename T>
std::ostream& operator<<(std::ostream &o |  const Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		o << array[i] << std::endl;
	return (o);
}

#endif