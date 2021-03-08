/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:19:16 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/08 12:59:14 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

int             ft_subject_main(void)
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    return (0);
}

void            ft_test_more(void)
{
    Sorcerer og("Adan", "the origin");
    Sorcerer cpy(og);
    Sorcerer cpy2("Abel", "the second copy");
    
    std::cout << "Original : " << og << "Copy 1 : " << cpy << "Copy 2 : " << cpy2;
    cpy2 = cpy;
    std::cout << "cpy2 = cpy" << std::endl;
    std::cout << "Original : " << og << "Copy 1 : " << cpy << "Copy 2 : " << cpy2;

    return;
}

void            ft_test_extra(void)
{
    Sorcerer robert("Merlin", "the Greatest");
    Peasant bill("Bill");

    std::cout << robert << bill;
    robert.polymorph(bill);
    
    return;
}

int             main(void)
{
    std::cout << std::endl << "\033[1;32m< Testing subject main >\033[0m" << std::endl;
    ft_subject_main();

    std::cout << std::endl << "\033[1;32m< Testing canonical class with Sorcerer >\033[0m" << std::endl;
    ft_test_more();

    std::cout << std::endl << "\033[1;32m< Testing extra derived class >\033[0m" << std::endl;
    ft_test_extra();
    std::cout << std::endl;

    return (0);
}
