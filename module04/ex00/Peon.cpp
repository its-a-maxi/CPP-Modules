/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:00 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:04:14 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(const Peon &src) : Victim(src.getName())
{
	*this = src;
	std::cout << "Zog zog." << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!"
	<< std::endl;
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */