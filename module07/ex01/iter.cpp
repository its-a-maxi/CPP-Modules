
// ----------------- INCLUDES ----------------- // 

# include <iostream>
# include <string>

// ----------------- ITER ----------------- // 

template< typename T >
void	iter( T *arr, int size, void (*function)( T & ))
{
	int		i = -1;

	while ( ++i < size )
		function(arr[i]);
	return;
}

// ----------------- TEST FUNCTIONS ----------------- // 

template<typename T>
static void		ft_mini_print( T & x )
{
	std::cout << x << " ";
	return;
}

static void		ft_increase( int & n )
{
	n++;
	return;
}

static void		ft_toupper( char & c )
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return;
}

static void		ft_decrease_half( float & f )
{
	f -= 0.5;
	return;
}

// ----------------- MAIN ----------------- // 

int				main( void )
{
	std::cout << std::endl << "\033[1;33m- Testing with an Int array\033[0m" << std::endl;
	int arrInt[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	::iter(arrInt, 10, ft_mini_print);
	std::cout << std::endl;
	::iter(arrInt, 10, ft_increase);
	::iter(arrInt, 10, ft_mini_print);
	std::cout << std::endl << std::endl;

	
	std::cout << "\033[1;33m- Testing with a Char array\033[0m" << std::endl;
	char arrChar[7] = "hello!";
	::iter(arrChar, 7, ft_mini_print);
	std::cout << std::endl;
	::iter(arrChar, 7, ft_toupper);
	::iter(arrChar, 7, ft_mini_print);
	std::cout << std::endl << std::endl;

	
	std::cout << "\033[1;33m- Testing with a Float array\033[0m" << std::endl;
	float arrFloat[10] = { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f };
	::iter(arrFloat, 10, ft_mini_print);
	std::cout << std::endl;
	::iter(arrFloat, 10, ft_decrease_half);
	::iter(arrFloat, 10, ft_mini_print);
	std::cout << std::endl << std::endl;

	return (0);

}