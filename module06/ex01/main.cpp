
# include <iostream>
# include <string>
# include <ctime>
# include <iomanip>

struct			Data
{
	std::string string1;
	int			integer;
	std::string	string2;
};


void    		*serialize( void )
{
	srand(time(0));
	int		len1 = rand() % 20;
	int		len2 = rand() % 20;
	char	*sequence = new char[len1 + len2 + 4];
	int		i = -1;

	while (++i < len1)
		reinterpret_cast<char *>(sequence)[i] = (rand() % 26) + 97;
	*reinterpret_cast<int *>(sequence + len1) = rand () % 1000;
	i = (len1 + 3);
	while (++i < (len1 + len2 + 4))
		reinterpret_cast<char *>(sequence)[i] = (rand() % 26) + 97;

	return (sequence);
}

Data			*deserialize( void * raw )
{
	char	*aux = reinterpret_cast<char *>(raw);
	Data	*rst = new Data;
	int		len1 = 0;
	int		len2 = 0;
	int		i = -1;

	while (aux[len1] >= 'a' && aux[len1] <= 'z')
		len1++;
	while (aux[len2 + len1 + 4] >= 'a' && aux[len2 + len1 + 4] <= 'z')
		len2++;

	rst->string1.resize(len1);
	rst->string2.resize(len2);

	while (++i < len1)
		rst->string1.at(i) = reinterpret_cast<char *>(raw)[i];
	rst->integer = *reinterpret_cast<int *>(aux + len1);
	i = (len1 + 3);
	while (++i < (len1 + len2 + 4))
		rst->string2.at(i - (len1 + 4)) = reinterpret_cast<char *>(raw)[i];
	return (rst);
}

static void		ft_checkSequence(void * sequence)
{
	char	*aux = reinterpret_cast<char *>(sequence);
	int		j;
	int 	i = -1;

    std::cout << std::endl << "< SEQUENCE VALUES >" << std::endl;
	std::cout << "First string  = ";
	while (aux[++i] >= 'a' && aux[i] <= 'z')
		std::cout << aux[i];
	j = i;
	std::cout << std::endl << "Lenght        = " << j << std::endl;
	i += 3;
	std::cout << "Int           = " << *reinterpret_cast<int *>(aux + j) << std::endl;
	std::cout << "Second string = ";
	while (aux[++i] >= 'a' && aux[i] <= 'z')
		std::cout << aux[i];
	std::cout << std::endl << "Lenght        = " << i - (j + 4) << std::endl;
	std::cout << std::endl;
	return;
}

static void		ft_checkValues(Data * value)
{
    std::cout << " ______________________________________" << std::endl;
    std::cout << "| STRUCT VALUES                        |" << std::endl;
    std::cout << "| ------------------------------------ |" << std::endl;
	std::cout << "| First string  = " << std::setw(20) << value->string1 << " |" << std::endl;
	std::cout << "| ------------------------------------ |" << std::endl;
	std::cout << "| Length        = " << std::setw(20) << value->string1.length() << " |" << std::endl;
	std::cout << "| ------------------------------------ |" << std::endl;
	std::cout << "| Integer       = " << std::setw(20) << value->integer << " |" << std::endl;
	std::cout << "| ------------------------------------ |" << std::endl;
	std::cout << "| Second string = " << std::setw(20) << value->string2 << " |" << std::endl;
	std::cout << "| ------------------------------------ |" << std::endl;
	std::cout << "| Length        = " << std::setw(20) << value->string2.length() << " |" << std::endl;
	std::cout << "| ____________________________________ |" << std::endl << std::endl;
	return;
}

int     main()
{
	void * sequence = serialize();
	Data * value = deserialize(sequence);

	ft_checkSequence(sequence);
	ft_checkValues(value);

	delete [] reinterpret_cast<char *>(sequence);
	delete value;
	return ( 0 );
}
