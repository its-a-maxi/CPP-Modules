#include "contact_class.hpp"
#include <iostream>

static void     ft_search(void)
{
    std::cout << "Working on it, thanks for your patience" << std::endl;
}

static void     ft_add(void)
{
    std::cout << "Working on it, thanks for your patience" << std::endl;
}

int             main(void)
{
    std::string cmd;

    while(1)
    {
        std::cout << "ENTER COMMAND: ";
        std::cin >> cmd;
        if (cmd == "ADD")
            ft_add();
        if (cmd == "SEARCH")
            ft_search();
        if (cmd == "EXIT")
            return (0);
        else
            std::cout << "Command not found, try 'ADD', 'SEARCH', or 'EXIT'" << std::endl;
    }
}