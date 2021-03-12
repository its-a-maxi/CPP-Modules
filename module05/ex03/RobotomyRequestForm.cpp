#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
Form("robotomy request", 72, 45), _target(target)
{
	srand(time(0));
	return;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
Form(src), _target(src.getTarget())
{
	srand(time(0));
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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


void						RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	Form::execute( executor );
	std::cout << "* rizzzzzzzzz *" << std::endl;
	if (rand() % 2 == 1)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->_target << " robotomy has failed." << std::endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &			RobotomyRequestForm::getTarget( void ) const
{
	return( this->_target );
}


/* ************************************************************************** */