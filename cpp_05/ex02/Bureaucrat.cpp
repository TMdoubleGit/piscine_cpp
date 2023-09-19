/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:44:19 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name |  int grade) : _name(name) |  _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &ref)
{
	this->_grade = ref.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &operator<<(std::ostream &out |  Bureaucrat const &ref)
{
	out << ref.getName() << " |  bureaucrat grade "<< ref.getGrade() << ".";
	return (out);
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		if (form.getSigned() == true)
		{
			std::cout << this->_name << " couldn't sign " << form.getName() << " because it's already signed." << std::endl;
			return ;
		}
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << "." << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &form) const
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}