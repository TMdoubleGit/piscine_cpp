/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:02:20 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 12:13:54 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &ref);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &ref);
		
		std::string const &getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
}:

#endif