/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:52:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 14:20:03 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void)
{
    this->_type = "unknown";
    return;
}

ZombieEvent::~ZombieEvent(void)
{
    delete this->_zombie;
    return;
}

void                ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return;
}

Zombie              *ZombieEvent::newZombie(std::string name)
{
    Zombie *newzombie = new Zombie(name, this->_type);
    this->_zombie = newzombie;
    return (newzombie);
}

static std::string  ft_random_name(std::string::size_type length)
{
    static std::string chrs =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ _";
    static std::mt19937 rg(static_cast<long unsigned int>(std::chrono::high_resolution_clock::now().time_since_epoch().count()));
    static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);
    std::string s;

    while(length--)
        s += chrs[pick(rg)];
    return (s);
}

Zombie              *ZombieEvent::randomChump(void)
{
    return (this->newZombie(ft_random_name(10)));
}