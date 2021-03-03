/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:00:07 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 19:00:09 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:
		Peon(std::string name);
		Peon(Peon const &src);
		~Peon();

		void virtual	getPolymorphed(void) const;

	private:
		Peon();

};

#endif /* ********************************************************** PEON_H */