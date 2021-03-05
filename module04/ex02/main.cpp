#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int     ft_subject_main( void )
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return 0;
}

int     main( void )
{
    std::cout << std::endl << "\033[1;32m< TESTING SUBJECT MAIN >\033[0m" << std::endl << std::endl;
    ft_subject_main();

    std::cout << std::endl << "\033[1;32m< TESTING EXTRA BEHAVIORS >\033[0m" << std::endl << std::endl;

    std::cout << "\033[1;33m- Creating two SpaceMarines, Bob and Jim\033[0m" << std::endl;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    std::cout << std::endl;

    std::cout << "\033[1;33m- Assigning them in the 'Angel Guard' squad\033[0m" << std::endl;
    Squad* AngelGuard = new Squad;
    AngelGuard->push(bob);
    AngelGuard->push(jim);
    std::cout << "~ There are " << AngelGuard->getCount() << " marines in the squad" << std::endl << std::endl;

    std::cout << "\033[1;33m- Trying to reassign Bob in the 'Angel Guard' squad\033[0m" << std::endl;
    AngelGuard->push(bob);
    std::cout << "~ There are " << AngelGuard->getCount() << " marines in the squad" << std::endl << std::endl;

    std::cout << "\033[1;33m- Trying to assing an unexisting person in the 'Angel Guard' squad\033[0m" << std::endl;
    AngelGuard->push(0);
    std::cout << "~ There are " << AngelGuard->getCount() << " marines in the squad" << std::endl << std::endl;

    std::cout << "\033[1;33m- Trying to access BOb and Jim possitions in the 'Angel Guard' squad\033[0m" << std::endl;
    std::cout << "~ Marine 0 'Jim': " << AngelGuard->getUnit(0) << std::endl;
    std::cout << "~ Marine 1 'Bob': " << AngelGuard->getUnit(1) << std::endl << std::endl;

    std::cout << "\033[1;33m- Trying to access unexisting possitions in the 'Angel Guard' squad\033[0m" << std::endl;
    std::cout << "~ Marine 404: " << AngelGuard->getUnit(404) << std::endl;
    std::cout << "~ Marine -21: " << AngelGuard->getUnit(-21) << std::endl << std::endl;

    std::cout << "\033[1;33m- Creating SpaceMarine Elias an assingning him to the new 'Absolvers' squad\033[0m" << std::endl;
    ISpaceMarine* elias = new TacticalMarine;
    Squad* Absolvers = new Squad;
    Absolvers->push(elias);
    std::cout << "~ There are " << Absolvers->getCount() << " marines in the squad" << std::endl;
    std::cout << "~ Marine 0: " << Absolvers->getUnit(0) << std::endl << std::endl;

    std::cout << "\033[1;33m- Using '=' operator overload, copying the 'Angel Guard' squad in the 'Absolvers'\033[0m" << std::endl;
    *Absolvers = *AngelGuard;
    std::cout << "~ There are " << Absolvers->getCount() << " marines in the squad" << std::endl;
    std::cout << "~ Marine 0 of 'Angel Guard': " << AngelGuard->getUnit(0) << std::endl;
    std::cout << "~ Marine 0 of 'Absolvers': " << Absolvers->getUnit(0) << std::endl;
    std::cout << "~ Marine 1 of 'Angel Guard': " << AngelGuard->getUnit(1) << std::endl;
    std::cout << "~ Marine 1 of 'Absolvers': " << Absolvers->getUnit(1) << std::endl << std::endl;

    std::cout << "\033[1;33m- Testing the brand new 'Absolvers' squad\033[0m" << std::endl;
    for (int i = 0; i < Absolvers->getCount(); ++i)
    {
        ISpaceMarine* cur = Absolvers->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << std::endl;

    std::cout << "\033[1;33m- Exterminating the 'Absolvers' squad\033[0m" << std::endl;
    delete Absolvers;
    std::cout << std::endl;

    std::cout << "\033[1;33m- Creating the 'Alpha Legion' squad from the 'Angel Guard' squad with the copy constructor\033[0m" << std::endl;
    Squad* AlphaLegion = new Squad(*AngelGuard);
    std::cout << "~ There are " << AlphaLegion->getCount() << " marines in the squad" << std::endl;
    std::cout << "~ Marine 0 of 'Angel Guard': " << AngelGuard->getUnit(0) << std::endl;
    std::cout << "~ Marine 0 of 'Alpha Legion': " << AlphaLegion->getUnit(0) << std::endl;
    std::cout << "~ Marine 1 of 'Angel Guard': " << AngelGuard->getUnit(1) << std::endl;
    std::cout << "~ Marine 1 of 'Alpha Legion': " << AlphaLegion->getUnit(1) << std::endl << std::endl;

    std::cout << "\033[1;33m- Exterminating the 'Angel Guard' squad\033[0m" << std::endl;
    delete AngelGuard;
    std::cout << std::endl;

    std::cout << "\033[1;33m- Testing the 'Alpha Legion' squad\033[0m" << std::endl;
    for (int i = 0; i < AlphaLegion->getCount(); ++i)
    {
        ISpaceMarine* cur = AlphaLegion->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << std::endl;

    std::cout << "\033[1;33m- Exterminating the 'Alpha Legion' squad\033[0m" << std::endl;
    delete AlphaLegion;
    std::cout << std::endl;

    
    return ( 0 );
}