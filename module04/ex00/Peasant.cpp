/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:00 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:04:14 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peasant::Peasant(std::string name) : Victim(name)
{
	std::cout << "Hello, my lord." << std::endl;
	return;
}

Peasant::Peasant(const Peasant &src) : Victim(src.getName())
{
	*this = src;
	std::cout << "Hello, my lord." << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peasant::~Peasant()
{
	std::cout << "It's painful." << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Peasant::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a beautiful penguin!"
	<< std::endl;
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */