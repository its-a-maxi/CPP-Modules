/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/01 17:16:31 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : _name("Default name"), _HP(this->getMaxHP()),
_EP(this->getMaxEP())
{
	srand(time(0));
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' FR4G-TP model" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : _name(name), _HP(this->getMaxHP()),
_EP(this->getMaxEP())
{
	srand(time(0));
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
	std::cout << "AHHHHHHHHHHH! Please. Don't kill me.		" << getName() << ". Today-Today" << std::endl;
	return; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_EP = rhs._EP;
	this->_HP = rhs._HP;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks a " << target
	<< " at range, causing " << this->getRangedDMG() << " points of damage!"
	<< std::endl; 
	return;
}

void			FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks a " << target
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
		this->setHP(100);
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
	"Claptrapped the enemy",
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
	<< ". The " << target << " receives emotional damage!"
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
void					FragTrap::setEP(int points)
{
	this->_EP = points;
	return;
}

int						FragTrap::getEP(void) const
{
	return (this->_EP);
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

int						FragTrap::getMaxEP(void) const
{
	return (this->_maxEP);
}

int						FragTrap::getMaxHP(void) const
{
	return (this->_maxHP);
}

int						FragTrap::getMeleeDMG(void) const
{
	return(this->_meleeDMG);
}

int						FragTrap::getRangedDMG(void) const
{
	return(this->_rangedDMG);
}

int						FragTrap::getArmor(void) const
{
	return(this->_armor);
}

/* ************************************************************************** */