/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:00:53 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/01 14:46:18 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int         main(void)
{
    std::cout << "   ---   Starting FR4G-TP bots   ---    " << std::endl;
    FragTrap claptrap1("ClapTrap");
    FragTrap claptrap2("CL4P-TP");

    std::cout << std::endl << "   ---   Testing battle capabilities  of FR4G-TP bots   ---    " << std::endl;
    claptrap1.meleeAttack("skag");
    claptrap1.rangedAttack("bandit");
    claptrap2.meleeAttack("psycho");
    claptrap2.rangedAttack("rakk");

    std::cout << std::endl << "   ---   Testing resistance of FR4G-TP bots   ---    " << std::endl;
    claptrap1.takeDamage(60);
    claptrap1.takeDamage(49);
    claptrap2.takeDamage(999999999);

    std::cout << std::endl << "   ---   Testing repairing capabilities of FR4G-TP bots   ---    " << std::endl;
    claptrap1.beRepaired(20);
    claptrap1.beRepaired(21);
    claptrap2.beRepaired(999999999);

    std::cout << std::endl << "   ---   Testing the 'VaultHunter.EXE' subroutine in FR4G-TP bots   ---    " << std::endl;
    claptrap1.vaulthunter_dot_exe("skag");
    claptrap1.vaulthunter_dot_exe("bandit");
    claptrap1.vaulthunter_dot_exe("psycho");
    claptrap1.vaulthunter_dot_exe("rakk");
    claptrap1.vaulthunter_dot_exe("skag");


    std::cout << std::endl << "   ---   Destroying FR4G-TP bots   ---    " << std::endl;
    return (1);
}