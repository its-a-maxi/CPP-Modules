#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
	public:

		MutantStack( void ) : std::stack<T>() {return;}
		MutantStack( MutantStack const & src ) : std::stack<T>( src ) {return;}
		~MutantStack( void ) {return;}

		MutantStack &		operator=( MutantStack const & rhs ){
			if ( this != &rhs )
			{
				std::stack<T>::c = rhs.c;
			}
			return ( *this );
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin( void ) {return ( std::stack<T>::c.begin() );}
		iterator end( void ) {return ( std::stack<T>::c.end() );}

		const_iterator begin( void ) const {return ( std::stack<T>::c.begin() );}
		const_iterator end( void ) const {return ( std::stack<T>::c.end() );}


	private:

};


#endif /* ***************************************************** MUTANTSTACK_H */