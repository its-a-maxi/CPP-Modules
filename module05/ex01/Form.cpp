#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form( std::string const & name, int gradeSign, int gradeExec ) :
_name(name), _signed(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if ( this->_gradeSign < 1 || this->_gradeExec < 1 )
		throw Form::GradeToHighException();
	else if ( this->_gradeSign > 150 || this->_gradeExec > 150 )
		throw Form::GradeToLowException();
	return;
}

Form::Form( const Form & src ) : _name(src.getName()),
_gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
		this->_signed = rhs.getSigned();
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	if (i.getSigned())
		o << "Form '" << i.getName() << "', signed, grade required to firm: "
		<< i.getGradeSign() << ", grade required to execute: " << i.getGradeExec()
		<< ".";
	else
		o << "Form '" << i.getName() << "', unsigned, grade required to firm: "
		<< i.getGradeSign() << ", grade required to execute: " << i.getGradeExec()
		<< ".";
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Form::beSigned( Bureaucrat const & bureaucrat )
{
	if (this->_gradeSign < bureaucrat.getGrade())
		throw Form::GradeToLowException();
	if (this->_signed)
		throw Form::FormAlreadyFirmedException();
	this->_signed = 1;
	return;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &		Form::getName( void ) const
{
	return ( this->_name );
}

int						Form::getSigned( void ) const
{
	return ( this->_signed );
}

int						Form::getGradeSign( void ) const
{
	return ( this->_gradeSign );
}

int						Form::getGradeExec( void ) const
{
	return ( this->_gradeExec );
}


/* ************************************************************************** */