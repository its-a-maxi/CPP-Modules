/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:00:53 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/02 15:00:49 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int         main(void)
{
    std::cout << std::endl << "\033[1;35m< TESTING FR4G-TP BOTS >\033[0m" << std::endl << std::endl;

    std::cout << "\033[1;32m- Starting FR4G-TP bots -\033[0m" << std::endl;
    FragTrap fragtrap1("VR-0N1CA");
    FragTrap fragtrap2("Jackobs Cove");

    std::cout << std::endl << "\033[1;32m- Testing battle capabilities  of FR4G-TP bots -\033[0m" << std::endl;
    fragtrap1.meleeAttack("Skag");
    fragtrap1.rangedAttack("Bandit");
    fragtrap2.meleeAttack("Psycho");
    fragtrap2.rangedAttack("Rakk");

    std::cout << std::endl << "\033[1;32m- Testing resistance of FR4G-TP bots -\033[0m" << std::endl;
    fragtrap1.takeDamage(60);
    fragtrap1.takeDamage(49);
    fragtrap2.takeDamage(999999999);

    std::cout << std::endl << "\033[1;32m- Testing repairing capabilities of FR4G-TP bots -\033[0m" << std::endl;
    fragtrap1.beRepaired(20);
    fragtrap1.beRepaired(21);
    fragtrap2.beRepaired(999999999);

    std::cout << std::endl << "\033[1;32m- Testing the 'VaultHunter.EXE' subroutine in FR4G-TP bots -\033[0m" << std::endl;
    fragtrap1.vaulthunter_dot_exe("Skag");
    fragtrap1.vaulthunter_dot_exe("Bandit");
    fragtrap1.vaulthunter_dot_exe("Psycho");
    fragtrap1.vaulthunter_dot_exe("Rakk");
    fragtrap1.vaulthunter_dot_exe("Skag");


    std::cout << std::endl << "\033[1;35m< TESTING SC4V-TP BOTS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;32m- Starting SC4V-TP bots -\033[0m" << std::endl << std::endl;
    ScavTrap scavtrap1("Elvis");
    ScavTrap scavtrap2("Creepy guy");

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


    std::cout << std::endl << "\033[1;35m< TESTING N1NJ4-TP BOTS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;32m- Starting N1NJ4-TP bots -\033[0m" << std::endl << std::endl;
    NinjaTrap ninjatrap1("Michelangelo");
    NinjaTrap ninjatrap2("Raphael");

    std::cout << std::endl << "\033[1;32m- Testing battle capabilities  of N1NJ4-TP bots -\033[0m" << std::endl;
    ninjatrap1.meleeAttack("Skag");
    ninjatrap1.rangedAttack("Bandit");
    ninjatrap2.meleeAttack("Psycho");
    ninjatrap2.rangedAttack("Rakk");

    std::cout << std::endl << "\033[1;32m- Testing resistance of N1NJ4-TP bots -\033[0m" << std::endl;
    ninjatrap1.takeDamage(60);
    ninjatrap1.takeDamage(49);
    ninjatrap2.takeDamage(999999999);

    std::cout << std::endl << "\033[1;32m- Testing repairing capabilities of N1NJ4-TP bots -\033[0m" << std::endl;
    ninjatrap1.beRepaired(20);
    ninjatrap1.beRepaired(21);
    ninjatrap2.beRepaired(999999999);

    std::cout << std::endl << "\033[1;32m- Testing the 'NinjaShoeBox.EXE' subroutine in N1NJ4-TP bots -\033[0m" << std::endl;
    ninjatrap1.ninjaShoeBox(fragtrap1);
    std::cout << "----------------" << std::endl;
    ninjatrap1.ninjaShoeBox(scavtrap2);
    std::cout << "----------------" << std::endl;
    ninjatrap1.ninjaShoeBox(ninjatrap2);
    std::cout << "----------------" << std::endl;
    ninjatrap1.ninjaShoeBox(fragtrap2);
    std::cout << "----------------" << std::endl;
    ninjatrap1.ninjaShoeBox(fragtrap1);
    std::cout << "----------------" << std::endl;
    ninjatrap1.ninjaShoeBox(scavtrap2);
    std::cout << "----------------" << std::endl;
    ninjatrap1.ninjaShoeBox(fragtrap1);
    std::cout << "----------------" << std::endl;
    ninjatrap1.ninjaShoeBox(scavtrap1);


    std::cout << std::endl << "\033[1;35m< DESTROYING BOTS >\033[0m" << std::endl;

    std::cout << std::endl << "\033[1;32m- Destroying FR4G-TP, SC4V-TP and N1NJ4-TP bots -\033[0m" << std::endl;
    return (1);
}