#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy()
{
	return;
}

Enemy::Enemy( int hp, std::string const & type ) : _HP(hp), _type(type)
{
	return;
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	this->_type = rhs.getType();
	this->_HP = rhs.getHP();
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void				Enemy::takeDamage( int damage )
{
	if ( damage <= 0 )
		return;
	this->_HP -= damage;
	if ( this->_HP < 0 )
		this->_HP = 0;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Enemy::getType( void ) const
{
	return ( this->_type );
}

int					Enemy::getHP( void ) const
{
	return ( this->_HP );
}


/* ************************************************************************** */