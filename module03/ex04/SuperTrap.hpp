/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:05 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 12:19:25 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

	public:
		SuperTrap();
		SuperTrap(std::string const name);
		SuperTrap(SuperTrap const &src);
		~SuperTrap();

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;

	private:
		void			initiliaceValues(void);
	
};

#endif /* ******************************************************** SUPERTRAP_H */