/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:59:40 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:16:39 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer();

		Sorcerer		&operator=(Sorcerer const &rhs);

		void			polymorph(Victim const &victim) const;

		std::string		getName(void) const;
		std::string		getTitle(void) const;

	private:
		Sorcerer();

		std::string		_name;
		std::string		_title;

};

std::ostream			&operator<<(std::ostream &o, Sorcerer const &i);

#endif /* ******************************************************** SORCERER_H */