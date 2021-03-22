
// ----------------- INCLUDES ----------------- // 

# include "Array.tpp"

// ----------------- EXTRA FUNCTIONS FOR MAIN ----------------- // 

template <typename T>
void	ft_check(Array<T> &src)
{
	for (size_t i = 0; i < src.size(); i++)
		std::cout << src[i] << " ";
	return;
}

// ----------------- MAIN ----------------- // 

int main(void)
{
	std::cout << std::endl << "\033[1;36m< STANDAR BEHAVIOUR >\033[0m" << std::endl;

	std::cout << std::endl << "\033[1;33m- Creating an int class 'int1' without arguments\033[0m" << std::endl;
	Array<int> int1;
	std::cout << std::endl << "\033[1;33m- Checking contents of 'int1'\033[0m" << std::endl;
	ft_check(int1);
	std::cout << std::endl << "\033[1;33m- Creating an int class 'int2' with a size of '5'\033[0m" << std::endl;
	Array<int> int2(5);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'int2'\033[0m" << std::endl;
	ft_check(int2);
	std::cout << std::endl << "\033[1;33m- Assigning 'int2' to 'int1'\033[0m" << std::endl;
	int1 = int2;
	std::cout << std::endl << "\033[1;33m- Checking contents of 'int1'\033[0m" << std::endl;
	ft_check(int1);
	std::cout << std::endl << "\033[1;33m- Changing contents of 'int2'\033[0m" << std::endl;
	for (size_t i = 0; i < int2.size(); i++)
		int2[i] = i;
	std::cout << std::endl << "\033[1;33m- Checking contents of 'int2'\033[0m" << std::endl;
	ft_check(int2);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'int1'\033[0m" << std::endl;
	ft_check(int1);
	std::cout << std::endl << "\033[1;33m- Creating an int class 'int3' with copy constructor from 'int2'\033[0m" << std::endl;
	Array<int> int3(int2);
	std::cout << std::endl << "\033[1;33m- Checking contents of 'int3'\033[0m" << std::endl;
	ft_check(int3);
	std::cout << std::endl << std::endl;


	std::cout << std::endl << "\033[1;36m< CHECKING WITH DIFFERENT TYPES >\033[0m" << std::endl;

	std::cout << std::endl << "\033[1;33m- Creating a float class 'float1' with a size of '6'\033[0m" << std::endl;
	Array<float> float1(6);
	std::cout << std::endl << "\033[1;33m- Changing contents of 'float1'\033[0m" << std::endl;
	for (size_t i = 0; i < float1.size(); i++)
		float1[i] = i + 0.42;
	std::cout << std::endl << "\033[1;33m- Checking contents of 'float1'\033[0m" << std::endl;
	ft_check(float1);
	std::cout << std::endl << "\033[1;33m- Creating a char class 'char1' with a size of '10'\033[0m" << std::endl;
	Array<char> char1(10);
	std::cout << std::endl << "\033[1;33m- Changing contents of 'char1'\033[0m" << std::endl;
	for (size_t i = 0; i < char1.size(); i++)
		char1[i] = i + 97;
	std::cout << std::endl << "\033[1;33m- Checking contents of 'char1'\033[0m" << std::endl;
	ft_check(char1);
	std::cout << std::endl << std::endl;


	std::cout << std::endl << "\033[1;36m< CHECKING EXCEPTIONS IN [] OPERATOR >\033[0m" << std::endl;

	std::cout << std::endl << "\033[1;33m- Trying to access 'int2[-1]' \033[0m" << std::endl;
	try
	{
		int2[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	std::cout << std::endl << "\033[1;33m- Trying to access 'int2[42]' \033[0m" << std::endl;
	try
	{
		int2[42] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl << std::endl;

	return (0);
}
