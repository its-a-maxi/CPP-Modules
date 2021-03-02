/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 12:58:33 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the evil janitor '" << this->getName()
	<< "' SC4V-TP model" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
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
	<< getName() << ". Today-Today" << std::endl;
	return; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/



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
	this->setModel("SC4V-TP");
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



/* ************************************************************************** */