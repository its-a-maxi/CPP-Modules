/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:49:15 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/25 11:37:32 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class   HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

        void        attack(void) const;

    private:
        Weapon          &_weapon;
        std::string     _name;

};

#endif