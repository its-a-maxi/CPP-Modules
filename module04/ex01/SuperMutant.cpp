#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant( const SuperMutant & src ) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	*this = rhs;
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void				SuperMutant::takeDamage( int damage )
{
	Enemy::takeDamage( damage - 3 );
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */