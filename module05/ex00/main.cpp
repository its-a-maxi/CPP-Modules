
#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << std::endl << "\033[1;32m< TESTING BASIC BEHAVIOUR >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating a new Bureaucrat 'Pol'\033[0m" << std::endl;
	Bureaucrat intern("Pol", 42);
	std::cout << intern << std::endl;

    std::cout << std::endl << "\033[1;33m- Checking 'incrementGrade' function\033[0m" << std::endl;
	intern.incrementGrade();
	std::cout << intern << std::endl;

    std::cout << std::endl << "\033[1;33m- Checking 'decrementGrade' function\033[0m" << std::endl;
	intern.decrementGrade();
	std::cout << intern << std::endl;



    std::cout << std::endl << std::endl << "\033[1;32m< TESTING EXCEPTIONS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating Bureaucrat 'Dummy' with a grade of '0'\033[0m" << std::endl;
	try
	{
		Bureaucrat dummy("Dummy", 0);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << "\033[1;33m- Creating Bureaucrat 'Dummy' with a grade of '9999'\033[0m" << std::endl;
	try
	{
		Bureaucrat dummy("Dummy", 9999);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << "\033[1;33m- Creating Bureaucrat 'Dummy' with a grade of '150' and decreasing it\033[0m" << std::endl;
	try
	{
		Bureaucrat dummy("Dummy", 150);
		std::cout << dummy << std::endl;
		dummy.decrementGrade();
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << std::endl << "\033[1;33m- Creating Bureaucrat 'Dummy' with a grade of '1' and increasing it\033[0m" << std::endl;
	try
	{
		Bureaucrat dummy("Dummy", 1);
		std::cout << dummy << std::endl;
		dummy.incrementGrade();
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}