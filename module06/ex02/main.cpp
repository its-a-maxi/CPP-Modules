
# include <iostream>
# include <string>
# include <ctime>


class Base
{
	public:
		virtual ~Base( void ) {return;};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base	*generate( void )
{
	int		i = rand() % 3;
	Base	*rst;

	if (i == 1)
		rst = new A;
	else if (i == 2)
		rst = new B;
	else
		rst = new C;
	if (!rst)
		return ( 0 );
	return ( rst );
}

void	identify_from_pointer( Base *p )
{
	if ((dynamic_cast<A *>(p)) != 0)
		std::cout << "A" << std::endl;
	else if ((dynamic_cast<B *>(p)) != 0)
		std::cout << "B" << std::endl;
	else if ((dynamic_cast<C *>(p)) != 0)
		std::cout << "C" << std::endl;
	return;
}

void	identify_from_reference( Base &p )
{
	identify_from_pointer(&p);
	return;
}

int		main(void)
{
	srand(time(0));

	Base	*ptr1 = generate();
	Base	*ptr2 = generate();
	Base	*ptr3 = generate();

	std::cout << "< IDENTIFY FROM POINTER >" << std::endl;
	identify_from_pointer(ptr1);
	identify_from_pointer(ptr2);
	identify_from_pointer(ptr3);
	
	std::cout << "< IDENTIFY FROM REFERENCE >" << std::endl;
	identify_from_reference(*ptr1);
	identify_from_reference(*ptr2);
	identify_from_reference(*ptr3);

	return (0);
}