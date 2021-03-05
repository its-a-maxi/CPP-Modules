#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() : _xp(0)
{
	return;
}

AMateria::AMateria( std::string const & type ) : _type(type), _xp(0)
{
	return;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
		this->_xp = rhs.getXP();
	}
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					AMateria::use( ICharacter & target )
{
	(void)target;
	this->_xp += 10;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &		AMateria::getType( void ) const
{
	return ( this->_type );
}

unsigned int			AMateria::getXP( void ) const
{
	return ( this->_xp );
}


/* ************************************************************************** */