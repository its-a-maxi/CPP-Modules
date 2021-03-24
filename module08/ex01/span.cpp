
#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	return;
}

Span::Span( int n ) : _max(n), _slot(0)
{
	return;
}


Span::Span( const Span & src )
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->clear();   
		for (int i = 0; i < rhs.size(); i++)
        	this->push_back(rhs[i]);
		this->_slot = rhs._slot;
		this->_max = rhs._max;
	}
	return ( *this );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void				Span::addNumber( int n )
{
	if ( this->_slot < this->_max )
		this->push_back(n);
	else
		throw Span::NoSpace();
	this->_slot++;
	return;
}

int					Span::shortestSpan( void ) const
{   
	if (this->_slot <= 1)
		throw Span::NoValues();

	std::vector<int> aux(*this);
	std::sort(aux.begin(), aux.end());
	std::vector<int>::const_iterator i = aux.begin();
	int rst = std::abs(i[0] - i[1]);

	while ( i < aux.end() )
	{
		if (rst > std::abs(i[0] - i[1]))
			rst = std::abs(i[0] - i[1]);
		i++;
	}
	return (rst);
}

int					Span::longestSpan( void ) const
{
	if (this->_slot <= 1)
		throw Span::NoValues();

	int i = *std::max_element(this->begin(), this->end()) - *std::min_element(this->begin(), this->end());
	return (i);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */