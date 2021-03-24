#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template < typename T >
typename T::const_iterator			easyfind( T const &container, int search )
{
	typename T::const_iterator rst = std::find( container.begin(), container.end(), search );
	if ( rst == container.end())
		throw std::exception();
	return ( rst );
}

#endif /* ******************************************************** EASYFIND_H */