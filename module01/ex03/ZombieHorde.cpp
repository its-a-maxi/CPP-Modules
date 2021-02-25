/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:52:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:46:39 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->_number = N;
    this->createHorde();
    return;
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] this->_zombieHorde;
    std::cout << "A horde of " << this->_number << " zombies has been anhilated" << std::endl;
    return;
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

void                ZombieHorde::createHorde(void)
{
    int i = -1;

    if (this->_number < 0)
        return;
    this->_zombieHorde = new Zombie[this->_number];
    while(++i < this->_number)
    {
        (this->_zombieHorde)[i].set_name(ft_random_name(10));
        (this->_zombieHorde)[i].set_type("unknown");
        (this->_zombieHorde)[i].announce();
    }
    return;
}