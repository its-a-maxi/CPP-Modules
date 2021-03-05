/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:19:16 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/04 19:59:05 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

std::string     ft_test_more(void)
{
    std::cout << std::endl << "\033[1;32m< Testing canonical class with Sorcerer >\033[0m" << std::endl;
    Sorcerer og("Adan", "the origin");
    Sorcerer cpy(og);
    Sorcerer cpy2("Abel", "the second copy");
    
    std::cout << "Original : " << og << "Copy 1 : " << cpy << "Copy 2 : " << cpy2;
    cpy2 = cpy;
    std::cout << "cpy2 = cpy" << std::endl;
    std::cout << "Original : " << og << "Copy 1 : " << cpy << "Copy 2 : " << cpy2;

    return("\033[1;32m< Testing subject main >\033[0m");
}

int             main(void)
{
    std::cout << ft_test_more() << std::endl;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    return (0);
}
