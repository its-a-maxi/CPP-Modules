#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
Form("presidential pardon", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) :
Form(src), _target(src.getTarget())
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
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


void						PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	Form::execute( executor );
	std::cout << this->_target << " has been pardoned by Zafod Beeblerox." << std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &			PresidentialPardonForm::getTarget( void ) const
{
	return( this->_target );
}


/* ************************************************************************** */