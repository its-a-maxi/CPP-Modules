
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include "span.hpp"

static void     ft_mini_print( int n )
{
	std::cout << n << " ";
	return;
}

static void		ft_subject_main( void )
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int		main(void)
{
	srand(time(0));

	std::cout << std::endl << "\033[1;36m< SUBJECT MAIN >\033[0m" << std::endl << std::endl;
	ft_subject_main();
	std::cout << std::endl;


	std::cout << std::endl << "\033[1;36m< STANDAR BEHAVIOUR >\033[0m" << std::endl;

	std::cout << std::endl << "\033[1;33m- Creating Span class 'sp1'\033[0m" << std::endl;
	Span sp1 = Span(5);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp1'\033[0m" << std::endl;
	std::for_each(sp1.begin(), sp1.end(), ft_mini_print);
	std::cout << std::endl << "\033[1;33m- Adding three random values to 'sp1' with addNumber()\033[0m" << std::endl;
	sp1.addNumber(rand() % 20);
	sp1.addNumber(rand() % 20);
	sp1.addNumber(rand() % 20);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp1'\033[0m" << std::endl;
	std::for_each(sp1.begin(), sp1.end(), ft_mini_print);
	std::cout << std::endl << "\033[1;33m- Using shortestSpan() in 'sp1'\033[0m" << std::endl;
	std::cout << sp1.shortestSpan();
	std::cout << std::endl << "\033[1;33m- Using longestSpan() in 'sp1'\033[0m" << std::endl;
	std::cout << sp1.longestSpan();
	std::cout << std::endl << std::endl;


	std::cout << std::endl << "\033[1;36m< COPY CONSTRUCTOR AND ASSIGN OPERATOR >\033[0m" << std::endl;

	std::cout << std::endl << "\033[1;33m- Creating Span class 'sp2' with the copy constructor\033[0m" << std::endl;
	Span sp2(sp1);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp2'\033[0m" << std::endl;
	std::for_each(sp2.begin(), sp2.end(), ft_mini_print);
	std::cout << std::endl << "\033[1;33m- Adding a random value to 'sp2'\033[0m" << std::endl;
	sp2.addNumber(rand() % 20);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp2'\033[0m" << std::endl;
	std::for_each(sp2.begin(), sp2.end(), ft_mini_print);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp1'\033[0m" << std::endl;
	std::for_each(sp1.begin(), sp1.end(), ft_mini_print);
	std::cout << std::endl << "\033[1;33m- Creating Span class 'sp3'\033[0m" << std::endl;
	Span sp3(0);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp3'\033[0m" << std::endl;
	std::for_each(sp3.begin(), sp3.end(), ft_mini_print);
	std::cout << std::endl << "\033[1;33m- Assign 'sp2' to 'sp3'\033[0m" << std::endl;
	sp3 = sp2;
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp3'\033[0m" << std::endl;
	std::for_each(sp3.begin(), sp3.end(), ft_mini_print);
	std::cout << std::endl << std::endl;


	std::cout << std::endl << "\033[1;36m< EXCEPTIONS >\033[0m" << std::endl;

	std::cout << std::endl << "\033[1;33m- Creating Span class 'sp4'\033[0m" << std::endl;
	Span sp4(0);
	std::cout << std::endl << "\033[1;33m- Trying to add more values than possible\033[0m" << std::endl;
	try
	{
		sp4.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl << "\033[1;33m- Trying to use shortestSpan without sufficent values\033[0m" << std::endl;
	try
	{
		std::cout << sp4.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl << "\033[1;33m- Trying to use longestSpan without sufficent values\033[0m" << std::endl;
	try
	{
		std::cout << sp4.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl << std::endl;


	std::cout << std::endl << "\033[1;36m< ADDING 10000 NUMBERS >\033[0m" << std::endl;

	std::cout << std::endl << "\033[1;33m- Creating Span class 'sp5'\033[0m" << std::endl;
	Span sp5(10000);
	std::cout << std::endl << "\033[1;33m- Filling 'sp5' with random values\033[0m" << std::endl;
	for ( int i = 0; i < 10000; ++i)
		sp5.addNumber(rand() % 100);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'sp5'\033[0m" << std::endl;
	std::cout << "WARNING! Enable this by uncommenting line 118 in main.cpp" << std::endl;
	//std::for_each(sp5.begin(), sp5.end(), ft_mini_print);
	std::cout << std::endl << std::endl;

	return (0);
}
