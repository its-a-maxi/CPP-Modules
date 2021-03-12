#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :
Form("shrubbery creation", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
Form(src), _target(src.getTarget())
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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


void						ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	Form::execute( executor );
	std::string			name;

	name = this->_target + "_shrubbery";
    std::ofstream       myfile(name);
	if (!myfile.is_open())
		return;
	myfile << "               ,@@@@@@@," << std::endl;
	myfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	myfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888A88/8o" << std::endl;
	myfile << "   ,%&A%&&%&&%,@@@A@@@/@@@88A88888/88'" << std::endl;
	myfile << "   %&&%&%&/%&&%@@A@@/ /@@@88888A88888'" << std::endl;
	myfile << "   %&&%/ %&%%&&@@A V /@@' `88A8 `/88'" << std::endl;
	myfile << "   `&%A ` /%&'    |.|        A '|8'" << std::endl;
	myfile << "       |o|        | |         | |" << std::endl;
	myfile << "       |.|        | |         | |" << std::endl;
	myfile << "    A/ ._A//_/__/  ,A_//__A/.  A_//__/_" << std::endl;
    myfile.close();
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &			ShrubberyCreationForm::getTarget( void ) const
{
	return( this->_target );
}


/* ************************************************************************** */