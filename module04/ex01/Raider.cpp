#include "Raider.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Raider::Raider() : Enemy(100, "Raider")
{
	std::cout << "Boom boom, baby!" << std::endl;
	return;
}

Raider::Raider( const Raider & src ) : Enemy(src)
{
	std::cout << "Boom boom, baby!" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Raider::~Raider()
{
	std::cout << "The hell...!?" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Raider &				Raider::operator=( Raider const & rhs )
{
	*this = rhs;
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */