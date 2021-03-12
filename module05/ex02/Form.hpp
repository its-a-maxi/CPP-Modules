#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form;
# include "Bureaucrat.hpp"

class Form
{

	public:

		Form( std::string const & name, int gradeSign, int gradeExec );
		Form( Form const & src );
		~Form();

		class				GradeToHighException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "FormException: Grade too High." );
				}
		};

		class				GradeToLowException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "FormException: Grade too Low." );
				}
		};

		class				FormAlreadyFirmedException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "FormException: Form is already firmed." );
				}
		};

		class				FormNotFirmedException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "FormException: Form is not signed." );
				}
		};

		Form &				operator=( Form const & rhs );

		void				beSigned( Bureaucrat const & bureaucrat );
		virtual void		execute( Bureaucrat const & executor ) const;

		std::string const &	getName( void ) const;
		int					getSigned( void ) const;
		int					getGradeSign( void ) const;
		int					getGradeExec( void ) const;


	private:

		Form();

		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int	const			_gradeExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */