/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:28:48 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 11:06:49 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class   Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain &ref);
		~Brain();
		Brain   &operator=(const Brain &ref);
};

#endif