
#include <array>
#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <algorithm>
#include "easyfind.hpp"

static void     ft_mini_print (int n)
{
	std::cout << n << " ";
	return;
}

int		main(void)
{
	std::cout << std::endl << "\033[1;36m< TESTING WITH A LIST >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating a list and filling it with various values\033[0m" << std::endl;
	std::list<int>		lst;
	lst.push_back(22);
	lst.push_back(420);
	lst.push_back(-99);
	lst.push_back(42);
	lst.push_back(30);
    std::cout << std::endl << "\033[1;33m- Checking values of the list\033[0m" << std::endl;
	std::for_each(lst.begin(), lst.end(), ft_mini_print);
    std::cout << std::endl << "\033[1;33m- Searching value '42' in the list with easyfind\033[0m" << std::endl;
	ft_mini_print(*easyfind(lst, 42));
    std::cout << std::endl << "\033[1;33m- Searching value '9999' in the list with easyfind\033[0m" << std::endl;
    try
    {
	    ft_mini_print(*easyfind(lst, 9999));
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
    std::cout << std::endl << std::endl;

	std::cout << std::endl << "\033[1;36m< TESTING WITH A VECTOR >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating a vector with a size of 6, full of '42' \033[0m" << std::endl;
	std::vector<int>	vec(6, 42);
    std::cout << std::endl << "\033[1;33m- Checking values of the vector\033[0m" << std::endl;
	std::for_each(vec.begin(), vec.end(), ft_mini_print);
    std::cout << std::endl << "\033[1;33m- Searching value '42' in the vector with easyfind\033[0m" << std::endl;
	ft_mini_print(*easyfind(vec, 42));
    std::cout << std::endl << "\033[1;33m- Searching value '9999' in the vector with easyfind\033[0m" << std::endl;
    try
    {
	    ft_mini_print(*easyfind(vec, 9999));
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
    std::cout << std::endl << std::endl;


	std::cout << std::endl << "\033[1;36m< TESTING WITH AN ARRAY >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;33m- Creating an array with a size of 6 and filling it with various values\033[0m" << std::endl;
    std::array<int,6>   ar = {44, 22, -62, 42, 9871, -34};
    std::cout << std::endl << "\033[1;33m- Checking values of the array\033[0m" << std::endl;
	std::for_each(ar.begin(), ar.end(), ft_mini_print);
    std::cout << std::endl << "\033[1;33m- Searching value '42' in the array with easyfind\033[0m" << std::endl;
	ft_mini_print(*easyfind(ar, 42));
    std::cout << std::endl << "\033[1;33m- Searching value '9999' in the array with easyfind\033[0m" << std::endl;
    try
    {
	    ft_mini_print(*easyfind(ar, 9999));
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
    std::cout << std::endl << std::endl;

    return (0);
}
