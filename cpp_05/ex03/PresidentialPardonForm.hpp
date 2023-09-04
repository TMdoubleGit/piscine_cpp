/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:58:27 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/23 09:26:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
		PresidentialPardonForm();
	
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &ref);
		void execute(Bureaucrat const &executor) const;
};

#endif