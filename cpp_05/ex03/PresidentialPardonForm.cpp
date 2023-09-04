/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:58:25 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/23 09:28:12 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	if (this != &ref)
	{
		_target = ref._target;
	}
	return (*this);
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}