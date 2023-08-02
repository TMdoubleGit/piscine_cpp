/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:07 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:11:33 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class	Cat : public AAnimal
{
	private:
		Brain*	_brain;
		
	public:
		Cat();
		Cat(const Cat &ref);
		~Cat();
		Cat &operator=(const Cat &ref);

		void	makeSound() const override;
};

#endif