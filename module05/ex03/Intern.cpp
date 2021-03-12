#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	this->_newForms[0] = &Intern::newShrubberyCreation;
	this->_newForms[1] = &Intern::newRobotomyRequest;
	this->_newForms[2] = &Intern::newPresidentialPardon;

	this->_formNames[0] = "shrubbery creation";
	this->_formNames[1] = "robotomy request";
	this->_formNames[2] = "presidential pardon";

	return;
}

Intern::Intern( const Intern & src )
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form					*Intern::makeForm(std::string const & form, std::string const & target) const
{
	/*typedef Form *	( *Intern:: ) ( std::string const & target );
	std::string		_formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};
	formArray		newForms[] = {
		&Intern::newShrubberyCreation,
		&Intern::newRobotomyRequest,
		&Intern::newPresidentialPardon};*/
	int i  = -1;
	while (++i < 3)
	{
		if ( form == this->_formNames[i] )
			return ( this->_newForms[i](target) );
	}
	throw NonExistentForm();
}

Form					*Intern::newShrubberyCreation(std::string const & target)
{
	return ( new ShrubberyCreationForm(target) );
}

Form					*Intern::newRobotomyRequest(std::string const & target)
{
	return ( new RobotomyRequestForm(target) );
}

Form					*Intern::newPresidentialPardon(std::string const & target)
{
	return ( new PresidentialPardonForm(target) );
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */