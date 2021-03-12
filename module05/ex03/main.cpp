
# include "Bureaucrat.hpp"
# include "Intern.hpp"

int main(void)
{
    std::cout << std::endl << "\033[1;32m< TESTING BASIC BEHAVIOUR >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new Bureaucrat 'Admin'\033[0m" << std::endl;
	Bureaucrat admin("Admin", 1);
	std::cout << admin << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new Intern\033[0m" << std::endl;
	Intern antony;
	std::cout << "( Intern antony created )" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new shrubbery creation form with Intern\033[0m" << std::endl;
	Form *form1 = antony.makeForm("shrubbery creation" ,"pot");
	std::cout << *form1 << std::endl;

    std::cout << std::endl << "\033[1;33m- Signing and executing shrubbery creation form\033[0m" << std::endl;
	admin.signForm(*form1);
	std::cout << *form1 << std::endl;
	admin.executeForm(*form1);
	std::cout << "( Check creation of 'pot_shrubbery' this directory )" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new robotomy request form with Intern\033[0m" << std::endl;
	Form *form2 = antony.makeForm("robotomy request" ,"Dummy");
	std::cout << *form2 << std::endl;

    std::cout << std::endl << "\033[1;33m- Signing and executing robotomy request form\033[0m" << std::endl;
	admin.signForm(*form2);
	std::cout << *form2 << std::endl;
	admin.executeForm(*form2);

    std::cout << std::endl << "\033[1;33m- Testing randomness of robotomy request form\033[0m" << std::endl;
	form2->execute(admin);
	form2->execute(admin);
	form2->execute(admin);
	form2->execute(admin);

    std::cout << std::endl << "\033[1;33m- Creating new presidential pardon form with Intern\033[0m" << std::endl;
	Form *form3 =  antony.makeForm("presidential pardon" ,"Pol");
	std::cout << *form3 << std::endl;

    std::cout << std::endl << "\033[1;33m- Signing and executing presitential pardon form\033[0m" << std::endl;
	admin.signForm(*form3);
	std::cout << *form3 << std::endl;
	admin.executeForm(*form3);


    std::cout << std::endl << std::endl << "\033[1;32m< TESTING EXCEPTIONS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new Bureaucrat 'pol'\033[0m" << std::endl;
	Bureaucrat pol("Pol", 150);
	std::cout << pol << std::endl;

    std::cout << std::endl << "\033[1;33m- Trying to execute shrubbery creation form\033[0m" << std::endl;
	try
	{
		pol.executeForm(*form1);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << "\033[1;33m- Trying to execute robotomy request form\033[0m" << std::endl;
	try
	{
		pol.executeForm(*form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << "\033[1;33m- Trying to execute presidential pardon form\033[0m" << std::endl;
	try
	{
		pol.executeForm(*form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << "\033[1;33m- Creating new shrubbery creation form with Intern\033[0m" << std::endl;
	Form *form4 = antony.makeForm("shrubbery creation" ,"garden");
	std::cout << *form4 << std::endl;

    std::cout << std::endl << "\033[1;33m- Trying to execute shrubbery creation form without it being signed\033[0m" << std::endl;
	try
	{
		admin.executeForm(*form4);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << "\033[1;33m- Trying to create a non-existent form with Intern\033[0m" << std::endl;
	try
	{
		Form *form5 = antony.makeForm("test" ,"test");
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << std::endl << "\033[1;36m~ DELETING FORMS ~\033[0m" << std::endl << std::endl;
	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return (0);
}