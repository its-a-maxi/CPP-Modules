#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
	return;
}

Cure::Cure( const Cure & src ) : AMateria(src)
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
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

AMateria *			Cure::clone( void ) const
{
	Cure * cpy = new Cure(*this);
	return ( cpy );
}

void				Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use( target );
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */