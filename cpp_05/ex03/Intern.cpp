/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:22:27 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/23 14:54:23 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &ref)
{
	(void)ref;
	return *this;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[] = {
		"ShruberryCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			AForm *form = NULL;
			switch(i)
			{
				case 0:
					form = new ShrubberyCreationForm(target);
					break;
				case 1:
					form = new RobotomyRequestForm(target);
					break;
				case 2:
					form = new PresidentialPardonForm(target);
					break;
				
			}
			if (form)
			{
				std::cout << "Intern creates " << name << " targeted on " << target << "." << std::endl;
				return form;
			}
		}
	}
	std::cout << "Intern cannot create " << name << " because it does not exist!" << std::endl;
	return NULL;
}