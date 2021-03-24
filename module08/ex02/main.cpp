
#include "mutantstack.hpp"
#include <iostream>
#include <stack>
#include <list>
#include <ctime>

static int		ft_subject_main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

static int		ft_subject_main_list()
{
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(mstack);
	return 0;
}

template <typename T>
static void		ft_mini_print( MutantStack<T> &mstack)
{
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << " ";
	++it;
	}
	std::cout << std::endl;
	return;
}

int main(void)
{
	srand(time(0));

	std::cout << std::endl << "\033[1;36m< SUBJECT MAIN >\033[0m" << std::endl << std::endl;

	std::cout << "\033[1;33m- Executing subject main with a MutatedStack\033[0m" << std::endl;
	ft_subject_main();
	std::cout << "\033[1;33m- Executing subject main with a List\033[0m" << std::endl;
	ft_subject_main_list();
	std::cout << std::endl;


	std::cout << std::endl << "\033[1;36m< STANDAR BEHAVIOUR >\033[0m" << std::endl << std::endl;
	
	std::cout << "\033[1;33m- Creating a MutantStack<int> 'mstack'\033[0m" << std::endl << std::endl;
	MutantStack<int> mstack;
	std::cout << "\033[1;33m- Pushing into 'mstack' two random values\033[0m" << std::endl << std::endl;
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	std::cout << "\033[1;33m- Checking contents of 'mstack'\033[0m" << std::endl;
	ft_mini_print(mstack);
	std::cout << "\033[1;33m- Checking size of 'mstack'\033[0m" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "\033[1;33m- Checking top of 'mstack'\033[0m" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "\033[1;33m- Popping last value of 'mstack'\033[0m" << std::endl << std::endl;
	mstack.pop();
	std::cout << "\033[1;33m- Checking contents of 'mstack'\033[0m" << std::endl;
	ft_mini_print(mstack);
	std::cout << "\033[1;33m- Checking size of 'mstack'\033[0m" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "\033[1;33m- Checking top of 'mstack'\033[0m" << std::endl;
	std::cout << mstack.top() << std::endl << std::endl;


	std::cout << std::endl << "\033[1;36m< ITERATORS >\033[0m" << std::endl << std::endl;

	std::cout << "\033[1;33m- Pushing into 'mstack' eight random values\033[0m" << std::endl << std::endl;
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	mstack.push(rand() % 20);
	std::cout << "\033[1;33m- Checking contents of 'mstack'\033[0m" << std::endl;
	ft_mini_print(mstack);
	std::cout << "\033[1;33m- Creating an iterator pointing to the beginning of 'mstack'\033[0m" << std::endl << std::endl;
	MutantStack<int>::iterator it1 = mstack.begin();
	std::cout << "\033[1;33m- Creating an iterator pointing to the end of 'mstack'\033[0m" << std::endl << std::endl;
	MutantStack<int>::iterator ite1 = mstack.end();
	std::cout << "\033[1;33m- Using those iterators to check the contents of 'mstack'\033[0m" << std::endl;
	while(it1 != ite1)
	{
		std::cout << *it1 << " ";
		++it1;
	}
	std::cout << std::endl;
	std::cout << "\033[1;33m- Creating a constant iterator pointing to the beginning of 'mstack'\033[0m" << std::endl << std::endl;
	MutantStack<int>::const_iterator it2 = mstack.begin();
	std::cout << "\033[1;33m- Creating a constant iterator pointing to the end of 'mstack'\033[0m" << std::endl << std::endl;
	MutantStack<int>::const_iterator ite2 = mstack.end();
	std::cout << "\033[1;33m- Using those iterators to check the contents of 'mstack'\033[0m" << std::endl;
	while(it2 != ite2)
	{
		std::cout << *it2 << " ";
		++it2;
	}
	std::cout << std::endl << std::endl;
	

	std::cout << std::endl << "\033[1;36m< COPY CONSTRUCTOR AND ASSIGN OPERATOR >\033[0m" << std::endl << std::endl;

	std::cout << "\033[1;33m- Creating a MutantStack<int> 'cpy1' with the copy constructor from 'mstack'\033[0m" << std::endl << std::endl;
	MutantStack<int> cpy1(mstack);
	std::cout << "\033[1;33m- Checking contents of 'cpy1'\033[0m" << std::endl;
	ft_mini_print(cpy1);
	std::cout << "\033[1;33m- Popping last value of 'mstack'\033[0m" << std::endl << std::endl;
	mstack.pop();
	std::cout << "\033[1;33m- Checking contents of 'mstack'\033[0m" << std::endl;
	ft_mini_print(mstack);
	std::cout << "\033[1;33m- Checking contents of 'cpy1'\033[0m" << std::endl;
	ft_mini_print(cpy1);
	std::cout << "\033[1;33m- Creating a MutantStack<int> 'cpy2' and assigning it 'mstack'\033[0m" << std::endl << std::endl;
	MutantStack<int> cpy2;
	cpy2 = mstack;
	std::cout << "\033[1;33m- Checking contents of 'cpy1'\033[0m" << std::endl;
	ft_mini_print(cpy2);
	std::cout << "\033[1;33m- Popping last value of 'mstack'\033[0m" << std::endl << std::endl;
	mstack.pop();
	std::cout << "\033[1;33m- Checking contents of 'mstack'\033[0m" << std::endl;
	ft_mini_print(mstack);
	std::cout << "\033[1;33m- Checking contents of 'cpy2'\033[0m" << std::endl;
	ft_mini_print(cpy2);

	return (0);
}
