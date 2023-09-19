/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:51:27 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/22 18:37:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat bureaucrat("Random mid employee",11);
		Form Form("Laisser-passer A38", 10, 10);

		bureaucrat.signForm(Form);
		std::cout << std::endl;
		std::cout << Form << std::endl;
		std::cout << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(Form);
		bureaucrat.decrementGrade();
		std::cout << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << std::endl;
		bureaucrat.signForm(Form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}