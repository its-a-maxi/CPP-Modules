/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:59:50 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:28:07 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer()
{
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(const Sorcerer &src)
{
	*this = src;
	std::cout << this->getName() << ", " << this->getTitle() << ", is copied!" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is dead. "
	<< "Consequences will never be the same!" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer				&Sorcerer::operator=( Sorcerer const & rhs )
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return *this;
}

std::ostream 			&operator<<(std::ostream &o, Sorcerer const &i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!"
	<< std::endl;
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string				Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string				Sorcerer::getTitle(void) const
{
	return (this->_title);
}


/* ************************************************************************** */