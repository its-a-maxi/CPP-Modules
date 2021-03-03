/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 13:12:44 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' FR4G-TP model" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
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
	this->setModel("FR4G-TP");
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

void			FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "Fragtrap ranged attack = ";
	this->ClapTrap::rangedAttack(target);
	return;
}

void			FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "Fragtrap melee attack = ";
	this->ClapTrap::meleeAttack(target);
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */