/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:11 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 13:02:53 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap() : ClapTrap()
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' N1NJ4-TP model" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->initiliaceValues();
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' N1NJ4-TP model" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
	srand(time(0));
	*this = src;
	std::cout << "Starting bootup sequence for the '" << this->getName()
	<< "' N1NJ4-TP model" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << "If i'm going to die, I'll do it with my own hands.			"
	<< this->getName() << ". Today-Today" << std::endl;
	return; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/



/*
** --------------------------------- METHODS ----------------------------------
*/

void			NinjaTrap::initiliaceValues(void)
{
	srand(time(0));
	this->setHP(60);
	this->setMaxHP(60);
	this->setEP(120);
	this->setMaxEP(120);
	this->setLvl(1);
	this->setMeleeDMG(60);
	this->setRangedDMG(5);
	this->setArmor(0);
	this->setModel("N1NJ4-TP");
	return;
}

void			NinjaTrap::ninjaShoeBox(FragTrap const &rhs)
{
	std::cout << "N1NJ4-TP " << this->getName()
	<< " encounters an extrange bot in the wasteland." << std::endl
	<< "It says that its name is FR4G-TP " << rhs.getName()
	<< ", and it need help." << std::endl;
	if (this->getEP() >= 30)
	{
		this->setEP(this->getEP() - 30);
		std::cout << "The honorable " << this->getName()
		<< " seeing how stupid is the bot, decides to help it." << std::endl
		<< "N1NJ4-TP " << this->getName() << " spend 30 EP and has now "
		<< this->getEP() << " EP remaining." << std::endl;
	}
	else
	{
		std::cout << "N1NJ4-TP " << this->getName()
		<< " doesn't have enought EP to help it."<< std::endl
		<< "N1NJ4-TP " << this->getName() << " only has "
		<< this->getEP() << " EP remainig." << std::endl;
	}
	return;
}

void			NinjaTrap::ninjaShoeBox(ScavTrap &rhs)
{
	std::cout << "N1NJ4-TP " << this->getName()
	<< " perceives an evil presence in the wasteland." << std::endl;
	if (this->getEP() >= 30)
	{
		this->setEP(this->getEP() - 30);
		std::cout << "He encounters a SC4V-TP model, the biggest enemy of "
		<< this->getName() << "." << std::endl;
		this->meleeAttack(rhs.getName());
		rhs.takeDamage(this->getMeleeDMG());
		rhs.rangedAttack(this->getName());
		this->takeDamage(rhs.getRangedDMG());
		this->meleeAttack(rhs.getName());
		rhs.takeDamage(this->getMeleeDMG());
		std::cout << "SK4V-TP " << rhs.getName()
		<< " is in the verge of death, so it runs away." << std::endl
		<< "N1NJ4-TP " << this->getName() << " has spend 30 EP and has now "
		<< this->getEP() << " EP remaining." << std::endl;;
	}
	else
	{
		std::cout << "N1NJ4-TP " << this->getName()
		<< " doesn't have enought EP left, so he ignore it." << std::endl
		<< "N1NJ4-TP " << this->getName() << " only has "
		<< this->getEP() << " EP remainig." << std::endl;
	}
	return;
}

void			NinjaTrap::ninjaShoeBox(NinjaTrap const &rhs)
{
	if(this->getEP() > this->getMaxEP() - 30)
		this->setEP(this->getMaxEP());
	else
		this->setEP(this->getEP() + 30);
	std::cout << "N1NJ4-TP " << this->getName()
	<< " encounters an old friend in the wasteland." << std::endl
	<< "Its name is N1NJ4-TP " << rhs.getName()
	<< ", and it wants to take something with " << this->getName()
	<< "." << std::endl << "After that our bot feels more relieved."
	<< std::endl << "N1NJ4-TP " << this->getName()
	<< " recovers 30 EP and has now " << this->getEP()
	<< " EP remaining." << std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */