
# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <cmath>

static int              ft_atoi( char *str )
{
    std::stringstream aux;
    int i;

    aux << str;
    aux >> i;

    return (i);
}

static void     ft_charCast( char c )
{
    std::cout << "char : '" << c << "'" << std::endl;
    std::cout << "int : " << static_cast<int>(c) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1)
    << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1)
    << static_cast<double>(c) << std::endl;
}

static void     ft_intCast( int i )
{
    if (i < 33 || i > 126)
        std::cout << "char : Non displayable" << std::endl;
    else
        std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
    std::cout << "int : " << i << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1)
    << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1)
    << static_cast<double>(i) << std::endl;
}

static void     ft_floatCast( float f )
{
    if (f < 33 || f > 126 )
        std::cout << "char : Non displayable" << std::endl;
    else if ( std::isnan(f) || std::isinf(f) )
        std::cout << "char : impossible" << std::endl;
    else
        std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
    if (std::isnan(f) || std::isinf(f))
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : " << static_cast<int>(f) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1)
    << f << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1)
    << static_cast<double>(f) << std::endl;
}

static void     ft_doubleCast( double d )
{
    if (d < 33 || d > 126 )
        std::cout << "char : Non displayable" << std::endl;
    else if ( std::isnan(d) || std::isinf(d) )
        std::cout << "char : impossible" << std::endl;
    else
        std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
    if (std::isnan(d) || std::isinf(d))
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : " << static_cast<int>(d) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1)
    << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1)
    << d << std::endl;
}

static void     ft_argCast( char *arg )
{
    std::string     string = arg;

    if ( string.find_first_of("0123456789") < std::string::npos &&
        string.find_first_not_of("+-.f0123456789") == std::string::npos )
    {
        if ( string.find_first_of(".") < std::string::npos ||
            string.find_first_of("f") < std::string::npos )
        {
            if ( string.find_first_of("f") < std::string::npos )
                ft_floatCast(std::stof(arg));
            else
                ft_doubleCast(std::stod(arg));
        }
        else
            ft_intCast(ft_atoi(arg));
    }
    else if (string.length() == 1)
        ft_charCast(*arg);
    else if (string == "nan" || string == "inf" || string == "+inf" || string == "-inf")
        ft_doubleCast(std::stod(arg));
    else if (string == "nanf" || string == "inff" || string == "+inff" || string == "-inff")
        ft_floatCast(std::stof(arg));
    else
        std::cout << "Error: The program needs an argument of type char/int/float/double." << std::endl;

    
    return;
}

int         main( int argc, char **argv )
{
    if ( argc != 2 )
    {
        if ( argc < 2 )
            std::cout << "Error: The program needs one argument." << std::endl;
        else
            std::cout << "Error: Too many arguments, the program just accepts one argument." << std::endl;
        return ( 0 );
    }

    ft_argCast( argv[1] );

    return ( 0 );
}