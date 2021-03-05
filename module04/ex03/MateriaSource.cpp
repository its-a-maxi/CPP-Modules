#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	this->_inventory = new AMateria*[4];
	int i = -1;

	while (++i < 4)
		this->_inventory[i] = 0;
	return;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
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

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
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

void					MateriaSource::learnMateria( AMateria *m )
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

AMateria *				MateriaSource::createMateria(std::string const & type)
{
	int i = -1;

	while ( ++i < 4 && this->_inventory[i] )
	{
		if ( this->_inventory[i]->getType() == type )
		{
			AMateria * cpy = this->_inventory[i]->clone();
			return ( cpy );
		}
	}
	return ( 0 );
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */