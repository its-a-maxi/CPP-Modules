#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	return;
}

Character::Character( std::string const & name ) : _name(name), _AP(40), _weapon(0)
{
	return;
}

Character::Character( const Character & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	this->_name = rhs.getName();
	this->_AP = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if ( !i.getWeapon() )
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed"
		<< std::endl;
	else if ( i.getWeapon() )
		o << i.getName() << " has " << i.getAP() << " AP and wields a "
		<< i.getWeapon()->getName() << std::endl;
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Character::recoveryAP( void )
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
	return; 
}

void					Character::equip( AWeapon * weapon )
{
	this->_weapon = weapon;
	return;
}

void					Character::attack( Enemy * enemy )
{
	if (!enemy || enemy->getHP() == 0)
	{
		std::cout << "The target is already dead" << std::endl;
		return;
	}
	if (!this->_weapon)	
	{
		std::cout << this->_name << " is unarmed, he can't attack the enemy" << std::endl;
		return;
	}
	if (this->_weapon->getAPCost() > this->_AP)
	{
		std::cout << this->_name << " doesn't have enought AP to attack the enemy" << std::endl;
		return;
	}
	this->_AP -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType() << " with a "
	<< this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy && enemy->getHP() == 0)
		delete enemy;
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &		Character::getName( void ) const
{
	return ( this->_name );
}

int						Character::getAP( void ) const
{
	return ( this->_AP );
}

AWeapon *				Character::getWeapon( void ) const
{
	return ( this->_weapon );
}


/* ************************************************************************** */