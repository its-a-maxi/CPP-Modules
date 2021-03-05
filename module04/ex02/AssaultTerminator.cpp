#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'will be back..." << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator &				AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	(void)rhs;
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine *					AssaultTerminator::clone( void ) const
{
	ISpaceMarine * cpy = new AssaultTerminator;
	return ( cpy );
}

void							AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return;
}

void							AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;
	return;
}

void							AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */