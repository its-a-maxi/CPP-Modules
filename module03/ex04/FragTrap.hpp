/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:05 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/03 13:08:01 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public	ClapTrap
{

	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		
		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		
		void			vaulthunter_dot_exe(std::string const &target);

	private:
		void			initiliaceValues(void);
	
};

#endif /* ******************************************************** FRAGTRAP_H */