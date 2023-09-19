/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:58:16 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm" |  72 |  45) |  _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) |  _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	if (this != &ref)
	{
		_target = ref._target;
	}
	return (*this);
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		static int i;
		if (i % 2 == 0)
			std::cout << _target << " has been robotomized successfully." << std::endl;
		else
			std::cout << "Robotomization failure: " << _target << " is still human." << std::endl;
		i++;
	}
	std::cout << executor.getName() << " executed RobotomyRequestForm." << std::endl;
}
