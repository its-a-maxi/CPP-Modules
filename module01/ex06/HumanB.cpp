/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:52:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/25 11:52:43 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    return;
}

HumanB::~HumanB(void)
{
    return;
}

void        HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    return;
}

void        HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}