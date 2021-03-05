/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:00:53 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/03/04 19:18:54 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iomanip>

void        ft_print_bot_stats(ClapTrap const &data, std::string name)
{
    std::cout << " _______________________________" << std::endl;
    std::cout << "|" << std::setw(30) << name << " |" << std::endl;
    std::cout << "| ----------------------------- |" << std::endl;
    std::cout << "| MODEL       = " << std::setw(15) << data.getModel() << " |" << std::endl;
    std::cout << "| NAME        = " << std::setw(15) << data.getName() << " |" << std::endl;
    std::cout << "| HP          = " << std::setw(15) << data.getHP() << " |" << std::endl;
    std::cout << "| MAX HP      = " << std::setw(15) << data.getMaxHP() << " |" << std::endl;
    std::cout << "| EP          = " << std::setw(15) << data.getEP() << " |" << std::endl;
    std::cout << "| MAX EP      = " << std::setw(15) << data.getMaxEP() << " |" << std::endl;
    std::cout << "| LEVEL       = " << std::setw(15) << data.getLvl() << " |" << std::endl;
    std::cout << "| MELEE DMG   = " << std::setw(15) << data.getMeleeDMG() << " |" << std::endl;
    std::cout << "| RANGED DMG  = " << std::setw(15) << data.getRangedDMG() << " |" << std::endl;
    std::cout << "| ARMOR       = " << std::setw(15) << data.getArmor() << " |" << std::endl;
    std::cout << "| _____________________________ |" << std::endl;
    return;
}

int         main(void)
{
    std::cout << std::endl << "\033[1;35m< TESTING 5UP3R-TP BOTS >\033[0m" << std::endl << std::endl;

    std::cout << "\033[1;32m- Starting bots -\033[0m" << std::endl;
    std::cout << "\033[1;33m. Creating 5UP3R-TP 'VR-0N1CA' .\033[0m" << std::endl;
    SuperTrap super("VR-0N1CA");
    std::cout << "\033[1;33m. Copying 5UP3R-TP 'VR-0N1CA' .\033[0m" << std::endl;
    SuperTrap super1(super);
    std::cout << "\033[1;33m. Creating auxiliary bots .\033[0m" << std::endl;
    FragTrap testdummy1("testdummy - 1");
    NinjaTrap testdummy2("testdummy - 2");
    ScavTrap testdummy3("testdummy - 3");

    std::cout << std::endl << "\033[1;32m- Printing stats -\033[0m" << std::endl;
    ft_print_bot_stats(super1, "super1");
    ft_print_bot_stats(testdummy1, "testdummy1");
    ft_print_bot_stats(testdummy2, "testdummy2");

    std::cout << std::endl << "\033[1;32m- Testing battle capabilities  of 5UP3R-TP bots -\033[0m" << std::endl;
    std::cout << "\033[1;33m. Melee attack .\033[0m" << std::endl;
    super1.meleeAttack("Skag");
    testdummy1.meleeAttack("Skag");
    testdummy2.meleeAttack("Skag");
    std::cout << "\033[1;33m. Ranged attack .\033[0m" << std::endl;
    super1.rangedAttack("Bandit");
    testdummy1.rangedAttack("Skag");
    testdummy2.rangedAttack("Skag");

    std::cout << std::endl << "\033[1;32m- Testing resistance of 5UP3R-TP bots -\033[0m" << std::endl;
    super1.takeDamage(60);
    super1.takeDamage(999999999);

    std::cout << std::endl << "\033[1;32m- Testing repairing capabilities of 5UP3R-TP bots -\033[0m" << std::endl;
    super1.beRepaired(20);
    super1.beRepaired(999999999);

    std::cout << std::endl << "\033[1;32m- Testing the 'VaultHunter.EXE' subroutine in 5UP3R-TP bots -\033[0m" << std::endl;
    super1.vaulthunter_dot_exe("Skag");
    super1.vaulthunter_dot_exe("Bandit");
    super1.vaulthunter_dot_exe("Psycho");
    super1.vaulthunter_dot_exe("Rakk");
    super1.vaulthunter_dot_exe("Skag");

    std::cout << std::endl << "\033[1;32m- Printing stats -\033[0m" << std::endl;
    ft_print_bot_stats(super1, "super1");

    std::cout << std::endl << "\033[1;32m- Testing the 'NinjaShoeBox.EXE' subroutine in N1NJ4-TP bots -\033[0m" << std::endl;
    std::cout << "\033[1;33m. Testing with NINJ4-TP bots .\033[0m" << std::endl;
    super1.ninjaShoeBox(testdummy2);
    std::cout << "------------------------------" << std::endl;
    super1.ninjaShoeBox(testdummy2);
    std::cout << "\033[1;33m. Testing with FR4G-TP bots .\033[0m" << std::endl;
    super1.ninjaShoeBox(testdummy1);
    std::cout << "\033[1;33m. Testing with SC4V-TP bots .\033[0m" << std::endl;
    super1.ninjaShoeBox(testdummy3);
    std::cout << "\033[1;33m. Testing actions without energy .\033[0m" << std::endl;
    super1.ninjaShoeBox(testdummy3);
    std::cout << "------------------------------" << std::endl;
    super1.ninjaShoeBox(testdummy1);

    std::cout << std::endl << "\033[1;32m- Printing stats -\033[0m" << std::endl;
    ft_print_bot_stats(super1, "super1");

    std::cout << std::endl << "\033[1;35m< DESTROYING BOTS >\033[0m" << std::endl;
    std::cout << std::endl << "\033[1;32m- Destroying 5UP3R-TP bots and auxiliary bots -\033[0m" << std::endl;
    return (1);
}