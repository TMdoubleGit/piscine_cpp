/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:12 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:06:13 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &ref);
		virtual ~Animal();
		Animal &operator=(const Animal &ref);

		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif