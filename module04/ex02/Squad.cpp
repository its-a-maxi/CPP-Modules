#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() : _squad(0), _count(0)
{
	return;
}

Squad::Squad( const Squad & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	int i = -1;

	if ( this->_squad )
	{
		while ( ++i < this->_count )
			delete this->_squad[i];
		delete[] this->_squad;
	}
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	int i = -1;
	
	if ( this == &rhs )
		return ( *this );
	if ( this->_squad )
	{
		while ( ++i < this->_count )
			delete this->_squad[i];
		delete[] this->_squad;
	}
	ISpaceMarine ** cpy = new ISpaceMarine*[rhs.getCount()];
	this->_squad = cpy;
	i = -1;
	while ( ++i < rhs.getCount() )
		this->_squad[i] = rhs._squad[i]->clone();
	this->_count = rhs.getCount();
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int					Squad::push( ISpaceMarine * roockie )
{
	int i = -1;

	if ( !roockie )
		return ( this->_count );
	if ( !this->_squad )
	{
		this->_squad = new ISpaceMarine*[1];
		this->_squad[0] = roockie;
		return (++this->_count);
	}
	while ( ++i < this->_count )
		if ( roockie == this->_squad[i] )
			return ( this->_count );

	ISpaceMarine **		cpy = new ISpaceMarine*[this->_count + 1];
	i = -1;
	while (++i < this->_count)
		cpy[i] = this->_squad[i];
	cpy[i] = roockie;
	delete[] this->_squad;
	this->_squad = cpy;
	return ( ++this->_count );

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int					Squad::getCount( void ) const
{
	return (this->_count);
}

ISpaceMarine *		Squad::getUnit( int pos ) const
{
	if (pos >= this->_count || pos < 0)
		return (0);
	else
		return (this->_squad[pos]);
}


/* ************************************************************************** */