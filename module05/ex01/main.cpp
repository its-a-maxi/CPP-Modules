
#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << std::endl << "\033[1;32m< TESTING BASIC BEHAVIOUR >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new Bureaucrat 'Pol'\033[0m" << std::endl;
	Bureaucrat pol("Pol", 42);
	std::cout << pol << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new form 'Birth certificate'\033[0m" << std::endl;
	Form form1("Birth certificate", 42, 20);
	std::cout << form1 << std::endl;

    std::cout << std::endl << "\033[1;33m- Signing 'Birth certificate' with 'Pol'\033[0m" << std::endl;
	pol.signForm(form1);
	std::cout << form1 << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new form 'Passport' \033[0m" << std::endl;
	Form form2("Passport", 60, 20);
	std::cout << form2 << std::endl;

    std::cout << std::endl << "\033[1;33m- Singing 'Passport' with 'Pol'\033[0m" << std::endl;
	pol.signForm(form2);
	std::cout << form2 << std::endl << std::endl;


    std::cout << std::endl << "\033[1;32m< TESTING EXCEPTIONS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new form 'Testament' \033[0m" << std::endl;
	Form form3("Testament", 40, 20);
	std::cout << form3 << std::endl;

    std::cout << std::endl << "\033[1;33m- Trying to sign 'Testament' with 'Pol'\033[0m" << std::endl;
	std::cout << pol << std::endl;
	try
	{
		pol.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form3 << std::endl;

    std::cout << std::endl << "\033[1;33m- Trying to sign an already signed form\033[0m" << std::endl;
	std::cout << form2 << std::endl;
	try
	{
		pol.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating new form 'Checkup' with invalid values\033[0m" << std::endl;
    std::cout << "-----------------------------" << std::endl;
	try
	{
		Form formException("Checkup", 420, 20);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << "-----------------------------" << std::endl;
	try
	{
		Form formException("Checkup", 0, 20);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << "-----------------------------" << std::endl;
	try
	{
		Form formException("Checkup", 42, 420);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << "-----------------------------" << std::endl;
	try
	{
		Form formException("Checkup", 42, 0);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}


    std::cout << "-----------------------------" << std::endl << std::endl;
	return (0);
}