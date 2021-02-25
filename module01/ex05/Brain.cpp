/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:52:35 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:05:09 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    return;
}

Brain::~Brain(void)
{
    return;
}

unsigned long   *Brain::identify(void) const
{
    return ((unsigned long *)this);
}

std::string     Brain::get_thought(void) const
{
    return (this->_thought);
}

void            Brain::set_thought(std::string thought)
{
    this->_thought = thought;
    return;
}