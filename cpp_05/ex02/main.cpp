/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:51:27 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/23 10:00:45 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		std::cout << "----------ShrubberyCreationForm-----------" << std::endl;
		Bureaucrat bureaucrat("Random mid employee",123);
		ShrubberyCreationForm form1("Shrubbery");

		bureaucrat.executeForm(form1);
		std::cout << std::endl << form1 << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::cout << std::endl << "Check the ShrubberyCreationForm_shrubbery file !" << std::endl;
		std::cout << "------------------------------------------" << std::endl << std::endl;
		
		std::cout << "-----------RobotomyRequestForm------------" << std::endl;
		Bureaucrat bureaucrat2("Senior executive",40);
		RobotomyRequestForm form2("Random intern");
		RobotomyRequestForm form3("An other random intern");

		bureaucrat2.signForm(form2);
		bureaucrat2.executeForm(form2);
		bureaucrat2.signForm(form3);
		bureaucrat2.executeForm(form3);
		std::cout << "------------------------------------------" << std::endl << std::endl;
		
		std::cout << "----------PresidentialPardonForm----------" << std::endl;
		Bureaucrat bureaucrat3("C-suite employee",26);
		PresidentialPardonForm form4("Ford Prefect");

		bureaucrat3.signForm(form4);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.incrementGrade();
		bureaucrat3.signForm(form4);
		bureaucrat3.executeForm(form4);
		while (bureaucrat3.getGrade() > 5)
			bureaucrat3.incrementGrade();
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.executeForm(form4);
		std::cout << "------------------------------------------" << std::endl << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}