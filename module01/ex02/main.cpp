/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:20:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 14:15:26 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent     event[3];
    Zombie          *zombie[3];
    ZombieEvent     randomEvent[3];
    Zombie          *randomZombie[3][5];
    int             i = -1;
    int             j = -1;

    std::cout << std::endl << "-- Testing individualy created zombies: --" << std::endl;
    event[0].setZombieType("Stalker");
    zombie[0] = event[0].newZombie("Theodore Miller");
    event[1].setZombieType("Crawler");
    zombie[1] = event[1].newZombie("Elisa Armstrong");
    event[2].setZombieType("Spitter");
    zombie[2] = event[2].newZombie("Jacob Fletcher");
    while (++j < 3)
        zombie[j]->announce();

    std::cout << std::endl << "-- Testing randomly created zombies: --" << std::endl;
    randomEvent[0].setZombieType("Runner");
    randomEvent[1].setZombieType("Armored");
    randomEvent[2].setZombieType("Giant");
    while (++i < 3)
    {
        j = -1;
        while (++j < 5)
        {
            randomZombie[i][j] = randomEvent[i].randomChump();
            randomZombie[i][j]->announce();
        }
    }
    std::cout << std::endl;
    
    return (0);
}