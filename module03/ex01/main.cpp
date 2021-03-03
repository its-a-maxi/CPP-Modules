/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:00:53 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 14:58:47 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int         main(void)
{
    std::cout << std::endl << "\033[1;35m< TESTING FR4G-TP BOTS >\033[0m" << std::endl << std::endl;

    std::cout << "\033[1;32m- Starting FR4G-TP bots -\033[0m" << std::endl;
    FragTrap claptrap1("VR-0N1CA");
    FragTrap claptrap2("Jackobs Cove");

    std::cout << std::endl << "\033[1;32m- Testing battle capabilities  of FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.meleeAttack("Skag");
    claptrap1.rangedAttack("Bandit");
    claptrap2.meleeAttack("Psycho");
    claptrap2.rangedAttack("Rakk");

    std::cout << std::endl << "\033[1;32m- Testing resistance of FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.takeDamage(60);
    claptrap1.takeDamage(49);
    claptrap2.takeDamage(999999999);

    std::cout << std::endl << "\033[1;32m- Testing repairing capabilities of FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.beRepaired(20);
    claptrap1.beRepaired(21);
    claptrap2.beRepaired(999999999);

    std::cout << std::endl << "\033[1;32m- Testing the 'VaultHunter.EXE' subroutine in FR4G-TP bots -\033[0m" << std::endl;
    claptrap1.vaulthunter_dot_exe("Skag");
    claptrap1.vaulthunter_dot_exe("Bandit");
    claptrap1.vaulthunter_dot_exe("Psycho");
    claptrap1.vaulthunter_dot_exe("Rakk");
    claptrap1.vaulthunter_dot_exe("Skag");


    std::cout << std::endl << "\033[1;35m< TESTING SC4V-TP BOTS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;32m- Starting SC4V-TP bots -\033[0m" << std::endl << std::endl;
    ScavTrap scavtrap1("Creepy guy");
    ScavTrap scavtrap2("Elvis");

    std::cout << std::endl << "\033[1;32m- Testing battle capabilities  of SC4V-TP bots -\033[0m" << std::endl;
    scavtrap1.meleeAttack("Skag");
    scavtrap1.rangedAttack("Bandit");
    scavtrap2.meleeAttack("Psycho");
    scavtrap2.rangedAttack("Rakk");

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