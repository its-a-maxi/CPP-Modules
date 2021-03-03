/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 14:10:56 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : _name("Default")
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' FR4G-TP model" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' FR4G-TP model" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	srand(time(0));
	*this = src;
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' FR4G-TP model" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "AHHHHHHHHHHH! Please. Don't kill me.					"
	<< this->getName() << ". Today-Today" << std::endl;
	return; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=(FragTrap const &rhs)
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

void			FragTrap::initiliaceValues(void)
{
	srand(time(0));
	this->setHP(100);
	this->setMaxHP(100);
	this->setEP(100);
	this->setMaxEP(100);
	this->setLvl(1);
	this->setMeleeDMG(30);
	this->setRangedDMG(20);
	this->setArmor(5);
	return;
}

void			FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target
	<< " at range, causing " << this->getRangedDMG() << " points of damage!"
	<< std::endl; 
	return;
}

void			FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target
	<< " at melee, causing " << this->getMeleeDMG() << " points of damage!"
	<< std::endl; 
	return;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	
	amount -= this->getArmor();
	if (amount >= this->getHP())
		this->setHP(0);
	else
		this->setHP(this->getHP() - amount);
	std::cout << "FR4G-TP " << this->getName() << " receives " << amount
	<< " points of damage! " << this->getName() << " has now " << this->getHP()
	<< " Hit Points left" << std::endl;
	return;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	if (amount >= this->getMaxHP())
		this->setHP(this->getMaxHP());
	else
		this->setHP(this->getHP() + amount);
	std::cout << "FR4G-TP " << this->getName() << " repairs " << amount
	<< " Hit Points! " << this->getName() << " has now " << this->getHP()
	<< " Hit Points" << std::endl;
	return;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string		randomAttack[] = {
	"kicks the enemy while he's down",
	"ClapTrapped the enemy",
	"confuses the enemy with his stupidity",
	"starts to cry",
	"threatens the enemy with taking his own life"};

	if (this->getEP() < 25)
	{
		std::cout << "FR4G-TP " << this->getName()
		<< " doesn't have enought Energy Points to activate 'VaultHunter.EXE'"
		<< std::endl;
		return;
	}
	this->setEP(this->getEP() - 25);
	std::cout << "FR4G-TP " << this->getName() << " " << randomAttack[rand() % 5]
	<< ". " << target << " receives emotional damage!"
	<< std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void					FragTrap::setHP(int points)
{
	this->_HP = points;
	return;
}

int						FragTrap::getHP(void) const
{
	return (this->_HP);
}

void					FragTrap::setMaxHP(int points)
{
	this->_maxHP = points;
	return;
}

int						FragTrap::getMaxHP(void) const
{
	return (this->_maxHP);
}

void					FragTrap::setEP(int points)
{
	this->_EP = points;
	return;
}

int						FragTrap::getEP(void) const
{
	return (this->_EP);
}

void					FragTrap::setMaxEP(int points)
{
	this->_maxEP = points;
	return;
}

int						FragTrap::getMaxEP(void) const
{
	return (this->_maxEP);
}

void					FragTrap::setLvl(int points)
{
	this->_lvl = points;
	return;
}

int						FragTrap::getLvl(void) const
{
	return (this->_lvl);
}

void					FragTrap::setName(std::string name)
{
	this->_name = name;
	return;
}

std::string				FragTrap::getName(void) const
{
	return (this->_name);
}

void					FragTrap::setMeleeDMG(int points)
{
	this->_meleeDMG = points;
	return;
}

int						FragTrap::getMeleeDMG(void) const
{
	return(this->_meleeDMG);
}

void					FragTrap::setRangedDMG(int points)
{
	this->_rangedDMG = points;
	return;
}

int						FragTrap::getRangedDMG(void) const
{
	return(this->_rangedDMG);
}

void					FragTrap::setArmor(int points)
{
	this->_armor = points;
	return;
}

int						FragTrap::getArmor(void) const
{
	return(this->_armor);
}

/* ************************************************************************** */