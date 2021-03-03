/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 14:09:36 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("Default")
{
	srand(time(0));
	std::cout << "Obtaining a base model of CL4P-TP for the '" << this->getName()
	<< "' bot" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	srand(time(0));
	std::cout << "Obtaining a base model of CL4P-TP for the '" << this->getName()
	<< "' bot" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	srand(time(0));
	*this = src;
	std::cout << "Obtaining a base model of CL4P-TP for the '" << this->getName()
	<< "' bot" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Retrieving the base model of CL4P-TP from the '" << this->getName()
	<< "' bot" << std::endl;
	return; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=(ClapTrap const &rhs)
{
	this->setHP(rhs.getHP());
	this->setMaxHP(rhs.getMaxHP());
	this->setEP(rhs.getEP());
	this->setMaxEP(rhs.getMaxEP());
	this->setLvl(rhs.getLvl());
	this->setName(rhs.getName());
	this->setMeleeDMG(rhs.getMeleeDMG());
	this->setRangedDMG(rhs.getRangedDMG());
	this->setArmor(rhs.getArmor());
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->getModel() << " " << this->getName() << " attacks " << target
	<< " at range, causing " << this->getRangedDMG() << " points of damage!"
	<< std::endl; 
	return;
}

void			ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->getModel() << " " << this->getName() << " attacks " << target
	<< " at melee, causing " << this->getMeleeDMG() << " points of damage!"
	<< std::endl; 
	return;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	amount -= this->getArmor();
	if (amount >= this->getHP())
		this->setHP(0);
	else
		this->setHP(this->getHP() - amount);
	std::cout << this->getModel() << " " << this->getName() << " receives " << amount
	<< " points of damage! " << this->getName() << " has now " << this->getHP()
	<< " Hit Points left" << std::endl;
	return;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (amount >= this->getMaxHP())
		this->setHP(this->getMaxHP());
	else
		this->setHP(this->getHP() + amount);
	std::cout << this->getModel() << " " << this->getName() << " repairs " << amount
	<< " Hit Points! " << this->getName() << " has now " << this->getHP()
	<< " Hit Points" << std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void					ClapTrap::setHP(int points)
{
	this->_HP = points;
	return;
}

int						ClapTrap::getHP(void) const
{
	return (this->_HP);
}

void					ClapTrap::setMaxHP(int points)
{
	this->_maxHP = points;
	return;
}

int						ClapTrap::getMaxHP(void) const
{
	return (this->_maxHP);
}

void					ClapTrap::setEP(int points)
{
	this->_EP = points;
	return;
}

int						ClapTrap::getEP(void) const
{
	return (this->_EP);
}

void					ClapTrap::setMaxEP(int points)
{
	this->_maxEP = points;
	return;
}

int						ClapTrap::getMaxEP(void) const
{
	return (this->_maxEP);
}

void					ClapTrap::setLvl(int points)
{
	this->_lvl = points;
	return;
}

int						ClapTrap::getLvl(void) const
{
	return (this->_lvl);
}

void					ClapTrap::setName(std::string name)
{
	this->_name = name;
	return;
}

std::string				ClapTrap::getName(void) const
{
	return (this->_name);
}

void					ClapTrap::setMeleeDMG(int points)
{
	this->_meleeDMG = points;
	return;
}

int						ClapTrap::getMeleeDMG(void) const
{
	return(this->_meleeDMG);
}

void					ClapTrap::setRangedDMG(int points)
{
	this->_rangedDMG = points;
	return;
}

int						ClapTrap::getRangedDMG(void) const
{
	return(this->_rangedDMG);
}

void					ClapTrap::setArmor(int points)
{
	this->_armor = points;
	return;
}

int						ClapTrap::getArmor(void) const
{
	return(this->_armor);
}

void					ClapTrap::setModel(std::string name)
{
	this->_model = name;
	return;
}

std::string				ClapTrap::getModel(void) const
{
	return (this->_model);
}

/* ************************************************************************** */