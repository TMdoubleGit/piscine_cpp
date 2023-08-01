/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:34:10 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 19:17:17 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class	Dog : public AAnimal
{
    private:
        Brain*	_brain;
        
    public:
        Dog();
        ~Dog();

        void	makeSound() const override;
};

#endif