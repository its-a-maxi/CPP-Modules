#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		virtual ~Intern();

		class				NonExistentForm : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "InternException: The form provided is non-existent." );
				}
		};

		Intern &		operator=( Intern const & rhs );

		Form			*makeForm(std::string const & form, std::string const & target) const;

	private:

		static Form			*newShrubberyCreation(std::string const & target);
		static Form			*newRobotomyRequest(std::string const & target);
		static Form			*newPresidentialPardon(std::string const & target);


		typedef Form *	( *formArray ) ( std::string const & target );

		formArray		_newForms[3];
		std::string		_formNames[3];

};

#endif /* ********************************************************** INTERN_H */