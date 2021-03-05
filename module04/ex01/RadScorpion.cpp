#include "RadScorpion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion( const RadScorpion & src ) : Enemy(src)
{
	std::cout << "* click click click *" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RadScorpion &				RadScorpion::operator=( RadScorpion const & rhs )
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