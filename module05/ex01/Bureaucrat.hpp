#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{

	public:

		Bureaucrat( std::string const & name, int grade );
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

		class				GradeToHighException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "BureaucratException: Grade too High." );
				}
		};

		class				GradeToLowException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "BureaucratException: Grade too Low." );
				}
		};


		Bureaucrat &		operator=( Bureaucrat const & rhs );

		void				incrementGrade( void );
		void				decrementGrade( void );
		void				signForm( Form & form );

		std::string const &	getName( void ) const;
		int					getGrade( void ) const;

	private:

		Bureaucrat();

		std::string const	_name;
		int					_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */