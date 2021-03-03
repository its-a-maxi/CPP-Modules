/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:07 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:17:44 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:
		Victim(std::string name);
		Victim(Victim const &src);
		~Victim();

		Victim			&operator=(Victim const &rhs);

		virtual void	getPolymorphed(void) const;

		std::string		getName(void) const;

	private:
		Victim();

		std::string		_name;

};

std::ostream			&operator<<(std::ostream &o, Victim const &i);

#endif /* ********************************************************** VICTIM_H */