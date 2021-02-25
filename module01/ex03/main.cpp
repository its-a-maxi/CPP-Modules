/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:20:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:46:07 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main(void)
{
    std::cout << std::endl << "-- Creation of a horde of 10 zombies: --" << std::endl;
    ZombieHorde horde1(10);

    std::cout << std::endl << "-- Creation of a horde of 50 zombies: --" << std::endl;
    ZombieHorde horde2(50);

    std::cout << std::endl << "-- Creation of a horde of 150 zombies: --" << std::endl;
    ZombieHorde horde3(150);

    std::cout << std::endl << "-- Dealing with the hordes of zombies: --" << std::endl;
    return (0);
}