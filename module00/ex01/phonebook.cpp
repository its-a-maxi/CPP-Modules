#include "contact_class.hpp"
#include <stdio.h>

static void     ft_search(contact *data)
{
    int     i;

    i = -1;
    if (!data[0].ft_used())
    {
        std::cout << "The contact list is empty, use 'ADD' to add a contact" << std::endl;
        return;
    }
    std::cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
    i = -1;
    while (data[++i].ft_used())
        data[i].ft_present_info(i);
    std::cout << "SELECT INDEX FOR CONTACT INFO: ";
    std::cin >> i;
    if ((i <= 8 || i > 0) && data[i - 1].ft_used())
        data[i - 1].ft_full_info();
    else
        std::cout << "The index you have selected doesn't have a contact associated" << std::endl;
    return;
}

static void     ft_add(contact *data)
{
    int     i;

    i = -1;
    while (++i < 8)
        if (!data[i].ft_used())
        {
            data[i].ft_save_info();
            return;
        }
    std::cout << "The contact list is full, no more space is available" << std::endl;
    return;
}

int             main(void)
{
    contact         data[8];
    std::string     cmd;

    while(1)
    {
        std::cout << "ENTER COMMAND: ";
        std::cin >> cmd;
        if (cmd == "ADD")
            ft_add(data);
        else if (cmd == "SEARCH")
            ft_search(data);
        else if (cmd == "EXIT")
            return (0);
        else
            std::cout << "Command not found, try 'ADD', 'SEARCH', or 'EXIT'" << std::endl;
    }
}