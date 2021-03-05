#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	return;
}

Ice::Ice( const Ice & src ) : AMateria(src)
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria *			Ice::clone( void ) const
{
	Ice * cpy = new Ice(*this);
	return ( cpy );
}

void				Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use( target );
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */