class AMateria;
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

static int	ft_subject_main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* dummy = new Character("dummy");

    me->use(0, *dummy);
    me->use(1, *dummy);

    delete dummy;
    delete me;
    delete src;

    return 0;
}

int     	main()
{
    std::cout << std::endl << "\033[1;32m< TESTING SUBJECT MAIN >\033[0m" << std::endl << std::endl;
    
	ft_subject_main();
	std::cout << std::endl;


    std::cout << std::endl << "\033[1;32m< TESTING STANDAR USE >\033[0m" << std::endl << std::endl;
	
	std::cout << "\033[1;33m- Creating Materia Source and adding ice and cure to it\033[0m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "\033[1;33m- Creating character 'me'\033[0m" << std::endl;
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	std::cout << "\033[1;33m- Creating and equipping two materias\033[0m" << std::endl;
	AMateria *		ptr[6];

	ptr[0] = src->createMateria("ice");
	me->equip(ptr[0]);
	std::cout << "( Character '" << me->getName() << "' equipped "
	<< ptr[0]->getType() << " materia )" << std::endl;
	ptr[1] = src->createMateria("cure");
	me->equip(ptr[1]);
	std::cout << "( Character '" << me->getName() << "' equipped "
	<< ptr[1]->getType() << " materia )" << std::endl << std::endl;

	std::cout << "\033[1;33m- Checking XP of Materias\033[0m" << std::endl;
	std::cout << "( Materia [0] of '" << ptr[0]->getType()
	<< "' type has " << ptr[0]->getXP() << " XP )" << std::endl;
	std::cout << "( Materia [1] of '" << ptr[1]->getType()
	<< "' type has " << ptr[1]->getXP() << " XP )" << std::endl << std::endl;


	std::cout << "\033[1;33m- Using Materias on 'dummy'\033[0m" << std::endl;
	ICharacter* dummy = new Character("dummy");
	int i;
	for (i = 0; i < 4; i++)
		me->use(i, *dummy);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking XP of Materias\033[0m" << std::endl;
	std::cout << "( Materia [0] of '" << ptr[0]->getType()
	<< "' type has " << ptr[0]->getXP() << " XP )" << std::endl;
	std::cout << "( Materia [1] of '" << ptr[1]->getType()
	<< "' type has " << ptr[1]->getXP() << " XP )" << std::endl << std::endl;


	std::cout << std::endl << "\033[1;32m< TESTING INVENTORY RESTRICTIONS >\033[0m" << std::endl << std::endl;

	std::cout << "\033[1;33m- Trying to equip a non existent Materia\033[0m" << std::endl;
	me->equip(0);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Trying to equip an already equipped Materia\033[0m" << std::endl;
	me->equip(ptr[0]);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Using Materias on 'dummy'\033[0m" << std::endl;
	for (i = 0; i < 4; i++)
		me->use(i, *dummy);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking XP of Materias\033[0m" << std::endl;
	std::cout << "( Materia [0] of '" << ptr[0]->getType()
	<< "' type has " << ptr[0]->getXP() << " XP )" << std::endl;
	std::cout << "( Materia [1] of '" << ptr[1]->getType()
	<< "' type has " << ptr[1]->getXP() << " XP )" << std::endl << std::endl;

	std::cout << "\033[1;33m- Trying to equip 3 more Materias\033[0m" << std::endl;
	ptr[2] = src->createMateria("ice");
	ptr[3] = src->createMateria("ice");
	ptr[4] = src->createMateria("ice");
	me->equip(ptr[2]);	
	me->equip(ptr[3]);	
	me->equip(ptr[4]);	
	std::cout << std::endl;

	std::cout << "\033[1;33m- Using Materias on 'dummy'\033[0m" << std::endl;
	for (i = 0; i < 4; i++)
		me->use(i, *dummy);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking XP of Materias\033[0m" << std::endl;
	std::cout << "( Materia [0] of '" << ptr[0]->getType()
	<< "' type has " << ptr[0]->getXP() << " XP )" << std::endl;
	std::cout << "( Materia [1] of '" << ptr[1]->getType()
	<< "' type has " << ptr[1]->getXP() << " XP )" << std::endl;
	std::cout << "( Materia [2] of '" << ptr[2]->getType()
	<< "' type has " << ptr[2]->getXP() << " XP )" << std::endl;
	std::cout << "( Materia [3] of '" << ptr[3]->getType()
	<< "' type has " << ptr[3]->getXP() << " XP )" << std::endl << std::endl;

	std::cout << "\033[1;33m- Trying to unequip inexistent Materias\033[0m" << std::endl;
	me->unequip(10);
	me->unequip(-10);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Trying to unequip two times de same Materia position\033[0m" << std::endl;
	me->unequip(2);
	me->unequip(2);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking unequipped materia hasn't been deleted\033[0m" << std::endl;
	std::cout << "( ptr[2] is a Materia of type '" << ptr[2]->getType() << "' )" << std::endl;
	std::cout << "( ptr[3] is a Materia of type '" << ptr[3]->getType() << "' )" << std::endl
	<< std::endl;

	std::cout << "\033[1;33m- Using Materias on 'dummy'\033[0m" << std::endl;
	for (i = 0; i < 4; i++)
		me->use(i, *dummy);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking XP of Materias\033[0m" << std::endl;
	std::cout << "( Materia [0] of '" << ptr[0]->getType()
	<< "' type has " << ptr[0]->getXP() << " XP )" << std::endl;
	std::cout << "( Materia [1] of '" << ptr[1]->getType()
	<< "' type has " << ptr[1]->getXP() << " XP )" << std::endl << std::endl;

	std::cout << std::endl << "\033[1;32m< TESTING INCORRECT USE >\033[0m" << std::endl << std::endl;

	std::cout << "\033[1;33m- Trying to use an incorrect idx in 'use' function\033[0m" << std::endl;
	me->use(10, *dummy);
	me->use(-10, *dummy);
	std::cout << std::endl;


	std::cout << std::endl << "\033[1;32m< TESTING DEEP COPY >\033[0m" << std::endl << std::endl;

	std::cout << "\033[1;33m- Creating a new character with an ice Materia\033[0m" << std::endl;
	Character dumbledore("Dumbledore");
	dumbledore.equip(ptr[4]);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Creating a new character with copy constructor\033[0m" << std::endl;
	Character potter(dumbledore);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking XP of 'Dumbledore' Materias\033[0m" << std::endl;
	std::cout << "( Materia [0] of '" << ptr[4]->getType()
	<< "' type has " << ptr[4]->getXP() << " XP )" << std::endl << std::endl;

	std::cout << "\033[1;33m- Using 'Potter' Materias on 'dummy'\033[0m" << std::endl;
	for (i = 0; i < 4; i++)
		potter.use(i, *dummy);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking XP of 'Dumbledore' Materias\033[0m" << std::endl;
	std::cout << "( Materia [0] of '" << ptr[4]->getType()
	<< "' type has " << ptr[4]->getXP() << " XP )" << std::endl << std::endl;

	std::cout << "\033[1;33m- Creating a new character with an empty inventory\033[0m" << std::endl;
	Character weasley("Weasley");
	std::cout << std::endl;

	std::cout << "\033[1;33m- Assigning 'Dumbledore' with the empty character\033[0m" << std::endl;
	dumbledore = weasley;
	std::cout << std::endl;

	std::cout << "\033[1;33m- Using 'dumbledore' Materias on 'dummy'\033[0m" << std::endl;
	for (i = 0; i < 4; i++)
		dumbledore.use(i, *dummy);
	std::cout << std::endl;

	std::cout << "\033[1;33m- Checking old 'Dumbledore' Materia has been deleted\033[0m" << std::endl;
	std::cout << "( ptr[4] is a Materia of type '" << ptr[4]->getType() << "' )" << std::endl
	<< std::endl;


	std::cout << std::endl << "\033[1;32m< DELETING AND DESTROYING REMAINING CLASSES >\033[0m" << std::endl << std::endl;
	delete dummy;
	delete me;
	delete src;
	return 0;
}