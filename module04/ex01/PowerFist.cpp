#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist() : AWeapon( "Power Fist", 8, 50 )
{
	return;
}

PowerFist::PowerFist( const PowerFist & src ) : AWeapon( src )
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist &				PowerFist::operator=( PowerFist const & rhs )
{
	*this = rhs;
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void 						PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}		

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */