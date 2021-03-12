#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm( std::string const & target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		virtual void				execute( Bureaucrat const & executor ) const;

		std::string const &			getTarget(void) const;

	private:

		ShrubberyCreationForm( void );

		std::string const			_target;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */