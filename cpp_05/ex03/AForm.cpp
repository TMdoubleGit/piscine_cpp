/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:06:22 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default") |  _signed(false) |  _gradeToSign(150) |  _gradeToExecute(150)
{
}

AForm::AForm(std::string const name |  int gradeToSign |  int gradeToExecute) : _name(name) |  _signed(false) |  _gradeToSign(gradeToSign) |  _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src) : _name(src.getName()) |  _signed(src.getSigned()) |  _gradeToSign(src.getGradeToSign()) |  _gradeToExecute(src.getGradeToExecute())
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(AForm const &ref)
{
	if (this != &ref)
	{
		this->_signed = ref.getSigned();
	}
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void AForm::beSigned(Bureaucrat const &ref)
{
	if (ref.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out |  AForm const &ref)
{
	std::string str;
	if (ref.getSigned())
		str = "signed";
	else
		str = "not signed";
    out << "------------- AForm Info -------------" << std::endl;
    out << "AForm name: " << ref.getName() << std::endl
      << "Grade to sign: " << ref.getGradeToSign() << std::endl
      << "Grade to execute: " << ref.getGradeToExecute() << std::endl
	  << "Signed: " << str << std::endl;
	out << "--------------------------------------" << std::endl;
	  return (out);
}