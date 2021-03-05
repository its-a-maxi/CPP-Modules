#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	*this = src;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	(void)rhs;
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine *					TacticalMarine::clone( void ) const
{
	ISpaceMarine * cpy = new TacticalMarine;
	return ( cpy );
}

void							TacticalMarine::battleCry( void ) const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return;
}

void							TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void							TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */