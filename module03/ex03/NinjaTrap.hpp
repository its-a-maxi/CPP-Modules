/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:14:05 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 12:19:25 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public	ClapTrap
{

	public:
		NinjaTrap();
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap();
		
		void			ninjaShoeBox(FragTrap const &rhs);
		void			ninjaShoeBox(ScavTrap &rhs);
		void			ninjaShoeBox(NinjaTrap const &rhs);

	private:
		void			initiliaceValues(void);
	
};

#endif /* ******************************************************** NINJATRAP_H */