#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon()
{
	return;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) :
_name(name), _APCost(apcost), _damage(damage)
{
	return;
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	this->_name = rhs.getName();
	this->_APCost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const &		AWeapon::getName( void ) const
{
	return ( this->_name );
}

int						AWeapon::getAPCost( void ) const
{
	return ( this->_APCost );
}

int						AWeapon::getDamage( void ) const
{
	return ( this->_damage );
}

void					AWeapon::setName( std::string const & name )
{
	this->_name = name;
	return;
}

void					AWeapon::setAPCost( int apcost )
{
	this->_APCost = apcost;
	return;
}

void					AWeapon::setDamage( int damage )
{
	this->_damage = damage;
	return;
}


/* ************************************************************************** */