/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 13:18:59 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap() : ClapTrap()
{
	this->initiliaceValues();
	std::cout << "Merging the two bots in one, the definitive robot has emerged - '"
	<< this->getName() << "' 5UP3R-TP model" << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
	this->initiliaceValues();
	std::cout << "Merging the two bots in one, the definitive robot has emerged - '"
	<< this->getName() << "' 5UP3R-TP model" << std::endl;
	return;
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
	srand(time(0));
	*this = src;;
	std::cout << "Copying bot '"
	<< this->getName() << "' 5UP3R-TP model" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
	std::cout << "The definitive robot has been defeated.					"
	<< this->getName() << ". Today-Today" << std::endl;
	return; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/



/*
** --------------------------------- METHODS ----------------------------------
*/

void			SuperTrap::initiliaceValues(void)
{
	srand(time(0));
	this->setHP(100);
	this->setMaxHP(100);
	this->setEP(120);
	this->setMaxEP(120);
	this->setLvl(1);
	this->setMeleeDMG(60);
	this->setRangedDMG(20);
	this->setArmor(5);
	this->setModel("5UP3R-TP");
	return;
}

void			SuperTrap::rangedAttack(std::string const &target) const
{
	FragTrap::rangedAttack(target);
	return;
}

void			SuperTrap::meleeAttack(std::string const &target) const
{
	NinjaTrap::meleeAttack(target);
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */