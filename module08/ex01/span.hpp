#ifndef SPAN_HPP
# define SPAN_HPP

# include <cmath>
# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span : public std::vector<int>
{

	public:

		Span( int n );
		Span( Span const & src );
		~Span( void );

		Span &		operator=( Span const & rhs );

		void		addNumber( int n );
		int			shortestSpan( void ) const;
		int			longestSpan( void ) const;

		class NoSpace : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "SpanException: There is no more space left in the class." );
				}
		};
		class NoValues : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ( "SpanException: There are not enought values to use this function." );
				}
		};

	private:

		Span( void );

		int				_max;
		int				_slot;

};

#endif /* ************************************************************ SPAN_H */