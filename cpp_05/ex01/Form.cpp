/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:06:22 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default") |  _signed(false) |  _gradeToSign(150) |  _gradeToExecute(150)
{
}

Form::Form(std::string const name |  int gradeToSign |  int gradeToExecute) : _name(name) |  _signed(false) |  _gradeToSign(gradeToSign) |  _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src.getName()) |  _signed(src.getSigned()) |  _gradeToSign(src.getGradeToSign()) |  _gradeToExecute(src.getGradeToExecute())
{
}

Form::~Form()
{
}

Form &Form::operator=(Form const &ref)
{
	if (this != &ref)
	{
		this->_signed = ref.getSigned();
	}
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat const &ref)
{
	if (ref.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out |  Form const &ref)
{
    out << "------------- Form Info -------------" << std::endl;
    out << "Form name: " << ref.getName() << std::endl
      << "Grade to sign: " << ref.getGradeToSign() << std::endl
      << "Grade to execute: " << ref.getGradeToExecute();
	  return (out);
}