/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:00:53 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/01 17:20:49 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int         main(void)
{
    std::cout << std::endl << "\033[1;35m< TESTING FR4G-TP BOTS >\033[0m" << std::endl << std::endl;

    std::cout << "\033[1;32m- Starting FR4G-TP bots -\033[0m" << std::endl;
    FragTrap claptrap1("ClapTrap");
    FragTrap claptrap2("CL4P-TP");

    std::cout << std::endl << "\033[1;32m- Testing battle capabilities  of FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.meleeAttack("skag");
    claptrap1.rangedAttack("bandit");
    claptrap2.meleeAttack("psycho");
    claptrap2.rangedAttack("rakk");

    std::cout << std::endl << "\033[1;32m- Testing resistance of FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.takeDamage(60);
    claptrap1.takeDamage(49);
    claptrap2.takeDamage(999999999);

    std::cout << std::endl << "\033[1;32m- Testing repairing capabilities of FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.beRepaired(20);
    claptrap1.beRepaired(21);
    claptrap2.beRepaired(999999999);

    std::cout << std::endl << "\033[1;32m- Testing the 'VaultHunter.EXE' subroutine in FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.vaulthunter_dot_exe("skag");
    claptrap1.vaulthunter_dot_exe("bandit");
    claptrap1.vaulthunter_dot_exe("psycho");
    claptrap1.vaulthunter_dot_exe("rakk");
    claptrap1.vaulthunter_dot_exe("skag");


    std::cout << std::endl << "\033[1;35m< TESTING SC4V-TP BOTS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;32m- Starting SC4V-TP bots -\033[0m" << std::endl << std::endl;
    ScavTrap scavtrap1("Creepy guy");
    ScavTrap scavtrap2("Elvis");

    std::cout << std::endl << "\033[1;32m- Testing battle capabilities  of SC4V-TP bots -\033[0m" << std::endl;
    scavtrap1.meleeAttack("skag");
    scavtrap1.rangedAttack("bandit");
    scavtrap2.meleeAttack("psycho");
    scavtrap2.rangedAttack("rakk");

    std::cout << std::endl << "\033[1;32m- Testing resistance of SC4V-TP bots -\033[0m" << std::endl;
    scavtrap1.takeDamage(60);
    scavtrap1.takeDamage(49);
    scavtrap2.takeDamage(999999999);

    std::cout << std::endl << "\033[1;32m- Testing repairing capabilities of SC4V-TP bots -\033[0m" << std::endl;
    scavtrap1.beRepaired(20);
    scavtrap1.beRepaired(21);
    scavtrap2.beRepaired(999999999);

    std::cout << std::endl << "\033[1;32m- Testing the 'EvilLairJanitor.EXE' subroutine in SC4V-TP bots -\033[0m" << std::endl;
    scavtrap1.challengeNewcomer();
    scavtrap1.challengeNewcomer();
    scavtrap2.challengeNewcomer();
    scavtrap2.challengeNewcomer();
    scavtrap1.challengeNewcomer();



    std::cout << std::endl << "\033[1;32m- Destroying FR4G-TP and SC4V-TP bots -\033[0m" << std::endl;
    return (1);
}