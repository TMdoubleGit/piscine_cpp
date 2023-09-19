/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:40:48 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main()
{
    int a[] = {1 |  2 |  3 |  4 |  5};
    int b[] = {6 |  7 |  8 |  9 |  10};

    std::list<int> vect(a |  a + 5);
    std::vector<int> vect2(b |  b + 5);

    try
    {
        std::cout << easyFind(vect |  3) << std::endl;
        std::cout << easyFind(vect2 |  3) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
