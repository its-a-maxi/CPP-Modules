/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 14:10:38 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : _name("Default name"), _HP(this->getMaxHP()),
_EP(this->getMaxEP())
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the evil janitor '" << this->getName()
	<< "' SC4V-TP model" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _HP(this->getMaxHP()),
_EP(this->getMaxEP())
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the evil janitor '" << this->getName()
	<< "' SC4V-TP model" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	srand(time(0));
	*this = src;
	std::cout << "Starting bootup sequence for the evil janitor '" << this->getName()
	<< "' SC4V-TP model" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "NO! Don't you know who I'm?! You'll pay for this!, AHHHHHH!		"
	<< this->getName() << ". Today-Today" << std::endl;
	return; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=(ScavTrap const &rhs)
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

void			ScavTrap::initiliaceValues(void)
{
	srand(time(0));
	this->setHP(100);
	this->setMaxHP(100);
	this->setEP(50);
	this->setMaxEP(50);
	this->setLvl(1);
	this->setMeleeDMG(20);
	this->setRangedDMG(15);
	this->setArmor(3);
	return;
}

void			ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target
	<< " with his magic, causing " << this->getRangedDMG() << " points of damage!"
	<< std::endl; 
	return;
}

void			ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target
	<< " with his scythe, causing " << this->getMeleeDMG() << " points of damage!"
	<< std::endl; 
	return;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->getArmor();
	if (amount >= this->getHP())
		this->setHP(0);
	else
		this->setHP(this->getHP() - amount);
	std::cout << "SC4V-TP " << this->getName() << " receives " << amount
	<< " points of damage! " << this->getName() << " has now " << this->getHP()
	<< " Hit Points left, And he is very angry" << std::endl;
	return;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (amount >= this->getMaxHP())
		this->setHP(this->getMaxHP());
	else
		this->setHP(this->getHP() + amount);
	std::cout << "SC4V-TP " << this->getName() << " casts a healing magic. He heals "
	<< amount << " Hit Points! " << this->getName() << " has now " << this->getHP()
	<< " Hit Points" << std::endl;
	return;
}

void			ScavTrap::challengeNewcomer(void) const
{
	std::string		randomChallenge[] = {
	"sacrifice 1000 souls for my Lord",
	"give me all the loot you have collected in Pandora",
	"hunt the ridiculously strong hyper super mega fire magic dragon",
	"watch Titanic with me and dry my tears",
	"play 'Dance Dance Revolution' with me"};

	std::cout << "SC4V-TP " << this->getName()
	<< " challenge you: If you want to enter this Evil Lair you need to "
	<< randomChallenge[rand() % 5] << std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void					ScavTrap::setHP(int points)
{
	this->_HP = points;
	return;
}

int						ScavTrap::getHP(void) const
{
	return (this->_HP);
}

void					ScavTrap::setMaxHP(int points)
{
	this->_maxHP = points;
	return;
}

int						ScavTrap::getMaxHP(void) const
{
	return (this->_maxHP);
}

void					ScavTrap::setEP(int points)
{
	this->_EP = points;
	return;
}

int						ScavTrap::getEP(void) const
{
	return (this->_EP);
}

void					ScavTrap::setMaxEP(int points)
{
	this->_maxEP = points;
	return;
}

int						ScavTrap::getMaxEP(void) const
{
	return (this->_maxEP);
}

void					ScavTrap::setLvl(int points)
{
	this->_lvl = points;
	return;
}

int						ScavTrap::getLvl(void) const
{
	return (this->_lvl);
}

void					ScavTrap::setName(std::string name)
{
	this->_name = name;
	return;
}

std::string				ScavTrap::getName(void) const
{
	return (this->_name);
}

void					ScavTrap::setMeleeDMG(int points)
{
	this->_meleeDMG = points;
	return;
}

int						ScavTrap::getMeleeDMG(void) const
{
	return(this->_meleeDMG);
}

void					ScavTrap::setRangedDMG(int points)
{
	this->_rangedDMG = points;
	return;
}

int						ScavTrap::getRangedDMG(void) const
{
	return(this->_rangedDMG);
}

void					ScavTrap::setArmor(int points)
{
	this->_armor = points;
	return;
}

int						ScavTrap::getArmor(void) const
{
	return(this->_armor);
}

/* ************************************************************************** */