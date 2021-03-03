/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:00 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:16:47 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim()
{
	return;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->getName()
	<< " just appeared!" << std::endl;
	return;
}

Victim::Victim(const Victim &src)
{
	*this = src;
	std::cout << "Some random victim called " << this->getName()
	<< " has just been copied!" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << this->getName()
	<< " just died for no apparent reason!" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=(Victim const &rhs)
{
	this->_name = getName();
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Victim const &i)
{
	o << "I'm " << i.getName() << " and I like otters!"
	<< std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!"
	<< std::endl;
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string				Victim::getName(void) const
{
	return (this->_name);
}


/* ************************************************************************** */