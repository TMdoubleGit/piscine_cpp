/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:12 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 10:59:23 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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