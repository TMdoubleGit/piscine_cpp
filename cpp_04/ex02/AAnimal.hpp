/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:12 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:10:23 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class	AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal( const AAnimal &ref );
		virtual ~AAnimal();
		AAnimal	&operator=( const AAnimal &ref );

		std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif