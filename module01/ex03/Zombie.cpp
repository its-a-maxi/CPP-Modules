/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:52:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:05:09 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie(void)
{
    return;
}

void    Zombie::announce(void) const
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

void    Zombie::set_type(std::string type)
{
    this->_type = type;
}

std::string     Zombie::get_name(void) const
{
    return (this->_name);
}

std::string     Zombie::get_type(void) const
{
    return (this->_type);
}