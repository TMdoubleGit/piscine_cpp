/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 00:52:38 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/25 00:57:41 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Str (address): " << &str << std::endl;
	std::cout << "Pointer (address): " << stringPTR << std::endl;
	std::cout << "Reference (address): " << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "Str: " << str << std::endl;
	std::cout << "Pointer: " << *stringPTR << std::endl;
	std::cout << "Reference: " << stringREF << std::endl;
	return (0);
}