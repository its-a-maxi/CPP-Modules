/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:05 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 13:00:58 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <time.h>

class FragTrap
{

	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const &src);
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const &target);

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

#endif /* ******************************************************** FRAGTRAP_H */