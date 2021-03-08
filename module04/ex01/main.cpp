#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

#include "Shishkebab.hpp"
#include "Raider.hpp"

int     ft_subject_main()
{    
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;   
    me->attack(b);
    std::cout << *me;

    return 0;
}

int     ft_extra_classes()
{    
    Character* me = new Character("Robert");

    std::cout << *me;

    Enemy* b = new Raider();

    AWeapon* pf = new Shishkebab();

    me->equip(pf);
    std::cout << *me;

    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;   
    me->attack(b);
    std::cout << *me;

    return 0;
}

void    ft_test_weapons_and_enemies( void )
{
    std::cout << "\033[1;33m- Creating two weapons, weapon1(Power Fist) and weapon2(Plasma Rifle)\033[0m" << std::endl;
    PowerFist weapon1;
    PlasmaRifle weapon2;
    weapon1.attack();
    weapon2.attack();
    std::cout << std::endl;

    std::cout << "\033[1;33m- Creating and testing damage resistance on enemy1(SuperMutant)\033[0m" << std::endl;
    SuperMutant enemy1;
    std::cout << "( Supermutant has " << enemy1.getHP() << " HP )" << std::endl;
    enemy1.takeDamage(10);
    std::cout << "( Supermutant take 10 points of damage )" << std::endl;
    std::cout << "( Supermutant has " << enemy1.getHP() << " HP )" << std::endl;
    enemy1.takeDamage(9999999);
    std::cout << "( Supermutant take 9999999 points of damage )" << std::endl;
    std::cout << "( Supermutant has " << enemy1.getHP() << " HP )" << std::endl;
    enemy1.takeDamage(-10);
    std::cout << "( Supermutant take -10 points of damage )" << std::endl;
    std::cout << "( Supermutant has " << enemy1.getHP() << " HP )" << std::endl << std::endl;

    std::cout << "\033[1;33m- Creating and testing damage resistance on enemy2(RadScorpion)\033[0m" << std::endl;
    RadScorpion enemy2;
    std::cout << "( RadScorpion has " << enemy2.getHP() << " HP )" << std::endl;
    enemy2.takeDamage(10);
    std::cout << "( RadScorpion take 10 points of damage )" << std::endl;
    std::cout << "( RadScorpion has " << enemy2.getHP() << " HP )" << std::endl;
    enemy2.takeDamage(9999999);
    std::cout << "( RadScorpion take 9999999 points of damage )" << std::endl;
    std::cout << "( RadScorpion has " << enemy2.getHP() << " HP )" << std::endl;
    enemy2.takeDamage(-10);
    std::cout << "( RadScorpion take -10 points of damage )" << std::endl;
    std::cout << "( RadScorpion has " << enemy2.getHP() << " HP )" << std::endl << std::endl;

    std::cout << "\033[1;33m- Destroying enemies\033[0m" << std::endl;
    return;
}

int     main( void )
{
    std::cout << std::endl << "\033[1;32m< TESTING SUBJECT MAIN >\033[0m" << std::endl << std::endl;
    ft_subject_main();

    std::cout << std::endl << "\033[1;32m< TESTING EXTRA BEHAVIORS >\033[0m" << std::endl << std::endl;
    ft_test_weapons_and_enemies();

    std::cout << std::endl << "\033[1;32m< TESTING EXTRA DERIVED CLASSES >\033[0m" << std::endl << std::endl;
    ft_extra_classes();


    std::cout << std::endl << "\033[1;32m< TESTING CHARACTER >\033[0m" << std::endl << std::endl;
    std::cout << "\033[1;33m- Creating character 'Sole Survivor' and his weapons\033[0m" << std::endl;
	PlasmaRifle		weapon1;
	PowerFist		weapon2;
    Character		mainCharacter("Sole Survivor");
    std::cout << "~ Character '" << mainCharacter.getName() << "' created" << std::endl << std::endl;

    std::cout << "\033[1;33m- Creating a SuperMutant\033[0m" << std::endl;
	Enemy			*enemy1 = new SuperMutant;
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl;
    std::cout << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' attacks the SuperMutant \033[0m" << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' equips the PlasmaRifle \033[0m" << std::endl;
	mainCharacter.equip(&weapon1);
	std::cout << mainCharacter;
	std::cout << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' is fighting the SuperMutant \033[0m" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' recovers some AP to finish the SuperMutant \033[0m" << std::endl
    << ". ___________________________________________ ." << std::endl;
	mainCharacter.recoveryAP();
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy1);
    std::cout << "( Supermutant has " << enemy1->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	std::cout << ". ___________________________________________ ." << std::endl << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' recovers all of his AP\033[0m" << std::endl;
	std::cout << mainCharacter;	
	mainCharacter.recoveryAP();	
	std::cout << mainCharacter;
	mainCharacter.recoveryAP();	
	std::cout << mainCharacter;
	mainCharacter.recoveryAP();	
	std::cout << mainCharacter;
	mainCharacter.recoveryAP();	
	std::cout << mainCharacter;
	mainCharacter.recoveryAP();	
	std::cout << mainCharacter;
	std::cout << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' equips the power fist\033[0m" << std::endl;
	mainCharacter.equip(&weapon2);
	std::cout << mainCharacter;
	std::cout << std::endl;

    std::cout << "\033[1;33m- Creating a RadScorpion\033[0m" << std::endl;
	Enemy			*enemy2 = new RadScorpion;
	std::cout << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' is fighting the RadScorpion\033[0m" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy2);
    std::cout << "( RadScorpion has " << enemy2->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter;
	mainCharacter.attack(enemy2);
    std::cout << "( RadScorpion has " << enemy2->getHP() << " HP )" << std::endl
    << ". ___________________________________________ ." << std::endl;
	std::cout << mainCharacter
    << ". ___________________________________________ ." << std::endl << std::endl;

    std::cout << "\033[1;33m- 'Sole Survivor' tries to attack an already dead enemy\033[0m" << std::endl;
	mainCharacter.attack(enemy2);
	std::cout << std::endl << std::endl;

    return (0);
}