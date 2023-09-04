/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:06:19 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/22 19:07:20 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool 				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		AForm();

	public:
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const &src);
		virtual ~AForm();
		AForm &operator=(AForm const &ref);
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat const &ref);
		virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Grade too high");};
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Grade too low");};
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Form not signed");};
		};
};

std::ostream &operator<<(std::ostream &out, AForm const &ref);

#endif