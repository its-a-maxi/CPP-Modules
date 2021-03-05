#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	return;
}

Character::Character( std::string const & name ) : _name(name)
{
	this->_inventory = new AMateria*[4];
	int i = -1;

	while (++i < 4)
		this->_inventory[i] = 0;
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
	int i = -1;

	while ( ++i < 4 )
		delete this->_inventory[i];
	delete[] this->_inventory;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		int i = -1;

		while ( ++i < 4 )
			delete this->_inventory[i];
		delete[] this->_inventory;

		this->_inventory = new AMateria*[4];
		i = -1;
		while ( ++i < 4 )
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Character::equip( AMateria *m )
{
	int i = -1;

	while ( ++i < 4 && m )
	{
		if ( !this->_inventory[i] && this->_inventory[i] != m )
		{
			delete this->_inventory[i];
			this->_inventory[i] = m;
			break;
		}
	}
	return;
}

void					Character::unequip( int idx )
{
	if ( idx >= 4 || idx < 0 || !this->_inventory[idx] )
		return;
	for (int i = idx; i < 3; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = 0;
	}
	return;
}

void					Character::use( int idx, ICharacter & target )
{
	if ( idx >= 4 || idx < 0 || !this->_inventory[idx] )
		return;
	this->_inventory[idx]->use(target);
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &		Character::getName( void ) const
{
	return ( this->_name );
}

/* ************************************************************************** */