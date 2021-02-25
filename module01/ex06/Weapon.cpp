/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:52:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/25 11:30:29 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return;
}

Weapon::Weapon(std::string type)
{
    this->setType(type);
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string const   &Weapon::getType(void) const
{
    return (this->_type);
}

void                Weapon::setType(std::string type)
{
    this->_type = type;
    return;
}