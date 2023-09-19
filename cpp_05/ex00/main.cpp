/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:51:27 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/22 14:47:15 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("CEO", 1);
        Bureaucrat bureaucrat2("Intern", 150);
        Bureaucrat bureaucrat3("Random mid employee", 75);
        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat3 << std::endl;

        bureaucrat.decrementGrade();
        bureaucrat2.incrementGrade();
        bureaucrat3.incrementGrade();
        std::cout << "New rank: " << bureaucrat << std::endl;
        std::cout << "New rank: " << bureaucrat2 << std::endl;
        std::cout << "New rank: " << bureaucrat3 << std::endl;
        bureaucrat.incrementGrade();
        std::cout << "CEO got a promotion: " << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << "CEO got an other promotion: " << bureaucrat << std::endl;
        
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}