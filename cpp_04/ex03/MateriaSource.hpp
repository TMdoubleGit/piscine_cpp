/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:14:35 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 15:24:29 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class	AMateria;

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inventory[4];
		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ref);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &ref);
		
		AMateria*	getMateria(int idx) const;
		AMateria*	createMateria(std::string const & type);
		void 		learnMateria(AMateria*);
};

#endif