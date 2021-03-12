#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	return;
}

Bureaucrat::Bureaucrat( std::string const & name, int grade ) : _name(name), _grade(grade)
{
	if ( this->_grade < 1 )
		throw Bureaucrat::GradeToHighException();
	else if ( this->_grade > 150 )
		throw Bureaucrat::GradeToLowException();
	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName()), _grade(src.getGrade())
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
		this->_grade = rhs.getGrade();
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Bureaucrat::incrementGrade( void )
{
	this->_grade -= 1;
	if ( this->_grade < 1 )
		throw Bureaucrat::GradeToHighException();
	else if ( this->_grade > 150 )
		throw Bureaucrat::GradeToLowException();
	return;
}

void					Bureaucrat::decrementGrade( void )
{
	this->_grade += 1;
	if ( this->_grade < 1 )
		throw Bureaucrat::GradeToHighException();
	else if ( this->_grade > 150 )
		throw Bureaucrat::GradeToLowException();
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &		Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int						Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}


/* ************************************************************************** */