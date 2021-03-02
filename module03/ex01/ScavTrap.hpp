/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:05 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 12:46:21 by mmonroy-         ###   ########.fr       */
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
		void			setMaxHP(int points);
		int				getMaxHP(void) const;
		void			setEP(int points);
		int				getEP(void) const;
		void			setMaxEP(int points);
		int				getMaxEP(void) const;
		void			setLvl(int points);
		int				getLvl(void) const;
		void			setName(std::string name);
		std::string		getName(void) const;
		void			setMeleeDMG(int points);
		int				getMeleeDMG(void) const;
		void			setRangedDMG(int points);
		int				getRangedDMG(void) const;
		void			setArmor(int points);
		int				getArmor(void) const;


	private:
		int					_HP;
		int					_maxHP;
		int					_EP;
		int					_maxEP ;
		int					_lvl;
		std::string			_name;
		int					_meleeDMG;
		int					_rangedDMG;
		int					_armor;

		void			initiliaceValues(void);

};

#endif /* ******************************************************** ScavTrap_H */