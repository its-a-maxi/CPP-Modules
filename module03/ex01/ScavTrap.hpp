/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:05 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/01 16:59:44 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <time.h>

class ScavTrap
{

	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(void) const;

		void			setHP(int points);
		int				getHP(void) const;
		void			setEP(int points);
		int				getEP(void) const;
		void			setName(std::string name);
		std::string		getName(void) const;
		int				getMaxHP(void) const;
		int				getMaxEP(void) const;
		int				getMeleeDMG(void) const;
		int				getRangedDMG(void) const;
		int				getArmor(void) const;


	private:
		int					_HP;
		static int const	_maxHP = 100;
		int					_EP;
		static int	const	_maxEP = 50;
		static int	const	_lvl = 1;
		std::string			_name;
		static int const	_meleeDMG = 20;
		static int const	_rangedDMG = 15;
		static int const	_armor = 3;
};

#endif /* ******************************************************** ScavTrap_H */