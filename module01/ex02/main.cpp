/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:20:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:03:18 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent     event[3];
    Zombie          *zombie[3];
    ZombieEvent     randomEvent[3];
    int             i = -1;

    std::cout << std::endl << "-- Testing individualy created zombies: --" << std::endl;
    event[0].setZombieType("Stalker");
    zombie[0] = event[0].newZombie("Theodore Miller");
    event[1].setZombieType("Crawler");
    zombie[1] = event[1].newZombie("Elisa Armstrong");
    event[2].setZombieType("Spitter");
    zombie[2] = event[2].newZombie("Jacob Fletcher");
    while (++i < 3)
        zombie[i]->announce();

    std::cout << std::endl << "-- Testing randomly created zombies: --" << std::endl;
    randomEvent[0].setZombieType("Runner");
    randomEvent[1].setZombieType("Armored");
    randomEvent[2].setZombieType("Giant");
    i = -1;
    while (++i < 3)
            randomEvent[i].randomChump();

    std::cout << std::endl << "-- Check if all the zombies leave the Heap: --" << std::endl;
    
    return (0);
}