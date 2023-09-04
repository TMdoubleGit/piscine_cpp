/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:58:23 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/23 09:25:55 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
		RobotomyRequestForm();
	
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &ref);
		void execute(Bureaucrat const &executor) const;
};

#endif