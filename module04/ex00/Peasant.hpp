/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:07 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:00:09 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEASANT_HPP
# define PEASANT_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peasant : public Victim
{

	public:
		Peasant(std::string name);
		Peasant(Peasant const &src);
		~Peasant();

		void virtual	getPolymorphed(void) const;

	private:
		Peasant();

};

#endif /* ********************************************************** PEASANT_H */