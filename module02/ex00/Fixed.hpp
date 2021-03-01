/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 11:57:14 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/26 16:41:02 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const &src);
		~Fixed();

		Fixed &		operator=(Fixed const &rhs);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

	private:
		int					_pointValue;
		static const int	_width = 8;

};

#endif