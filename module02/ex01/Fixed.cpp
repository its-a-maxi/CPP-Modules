/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:32:44 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/26 14:47:12 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _pointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const n) : _pointValue(n << Fixed::_width)
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const f) : _pointValue(roundf(f * (1 << Fixed::_width)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed				&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_pointValue = rhs._pointValue;
	}
	return *this;
}

std::ostream		&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int					Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_pointValue);
}

void				Fixed::setRawBits(int const raw)
{
	this->_pointValue = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return;
}

int					Fixed::toInt(void) const
{
	return (this->_pointValue >> Fixed::_width);
}

float				Fixed::toFloat(void) const
{
	return ((float)this->_pointValue / (float)(1 << Fixed::_width));
}

/* ************************************************************************** */