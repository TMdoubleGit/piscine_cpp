/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:41:55 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 12:45:24 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		Ice(Ice const &ref);
		~Ice();
		Ice &operator=(Ice const &ref);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif