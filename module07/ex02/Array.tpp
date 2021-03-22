
# include <iostream>
# include <string>

template < typename T >
class Array
{

	public:

		// ----------------- CONSTRUCTORS + DESTRUCTORS ----------------- //

		Array( void ) : _n(0)
		{
			this->_array = new T[1];
			return;
		}

		Array( unsigned int n ) : _n(n)
		{
			this->_array = new T[n];
			return;
		}

		Array( Array const & src )
		{
			this->_array = new T[1];
			*this = src;
			return;
		}

		~Array( void )
		{
			delete [] this->_array;
			return;
		}

		// ----------------- OPERATORS OVERLOAD ----------------- //

		Array &			operator=( Array const & rhs )
		{
			if ( this != &rhs )
			{
				delete [] this->_array;
				this->_array = new T[rhs._n];
				unsigned int i = -1;
				while ( ++i < rhs._n )
					this->_array[i] = T(rhs._array[i]);
				this->_n = rhs._n;
			}
			return ( *this );
		}

		T &				operator[]( unsigned int n )
		{
			if ( n >= this->_n )
				throw std::exception();
			return ( this->_array[n] );
		}

		// ----------------- FUNCTIONS ----------------- //

		unsigned int	size( void )
		{
			return( this->_n );
		}


	private:

		T *				_array;
		unsigned int	_n;

};