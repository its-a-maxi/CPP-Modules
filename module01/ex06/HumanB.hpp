/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:49:15 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/25 11:57:21 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class   HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void        attack(void) const;
        void        setWeapon(Weapon &weapon);

    private:
        Weapon          *_weapon;
        std::string     _name;

};

#endif