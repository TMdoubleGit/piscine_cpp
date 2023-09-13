/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:46:33 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/12 18:56:38 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate()
{
    if (std::rand() % 3 == 0)
        return (new A());
    else if (std::rand() % 3 == 1)
        return (new B());
    else
        return (new C());
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A";
    else if (dynamic_cast<B*>(p))
        std::cout << "B";
    else if (dynamic_cast<C*>(p))
        std::cout << "C";
    else
        std::cout << "Unknown";
}

void    identify(Base &p)
{
    identify(&p);
}