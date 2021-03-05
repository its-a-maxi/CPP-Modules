#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle() : AWeapon( "Plasma Rifle", 5, 21 )
{
	return;
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src ) : AWeapon( src )
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &				PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
	*this = rhs;
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void 						PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}				


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */