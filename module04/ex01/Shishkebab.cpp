#include "Shishkebab.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Shishkebab::Shishkebab() : AWeapon( "Shishkebab", 6, 40 )
{
	return;
}

Shishkebab::Shishkebab( const Shishkebab & src ) : AWeapon( src )
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Shishkebab::~Shishkebab()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Shishkebab &				Shishkebab::operator=( Shishkebab const & rhs )
{
	*this = rhs;
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void 						Shishkebab::attack( void ) const
{
	std::cout << "* Swash! *" << std::endl;
	return;
}		

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */