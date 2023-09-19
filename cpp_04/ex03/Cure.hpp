/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:51:19 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 15:22:35 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const &type);
		Cure(Cure const &ref);
		~Cure();
		Cure &operator=(Cure const &ref);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif