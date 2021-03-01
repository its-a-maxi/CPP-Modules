/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:32:20 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/26 16:41:38 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const n);
		Fixed(float const f);
		~Fixed();

		Fixed		&operator=(Fixed const &rhs);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

		float		toFloat(void) const;
		int			toInt(void) const;

	private:
		int					_pointValue;
		static const int	_width = 8;

};

std::ostream		&operator<<(std::ostream &o, Fixed const &i);

#endif