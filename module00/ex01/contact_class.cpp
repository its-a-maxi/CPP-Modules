#include "contact_class.hpp"

contact::contact(void)
{
    this->_used = 0;
    return;
}

contact::~contact(void)
{
    return;
}

int         contact::ft_used(void) const
{
    if (this->_used > 0)
        return (1);
    else
        return (0);
}

void        contact::ft_save_info(void)
{
    this->_used = 1;
    std::cin.ignore();
    std::cout << "First name: ";
    std::getline(std::cin, this->_first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Login: ";
	std::getline(std::cin, this->_login);
	std::cout << "Postal address: ";
	std::getline(std::cin, this->_postal_address);
	std::cout << "e-mail address: ";
	std::getline(std::cin, this->_email_address);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Birthday date: ";
	std::getline(std::cin, this->_birthday_date);
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->_favorite_meal);
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->_underwear_color);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
    return;
}

static void ft_write_info(std::string info)
{
    if (info.size() < 10)
    {
        std::cout << std::setw(10);
        std::cout << info;
    }
    else
    {
        std::cout << std::setw(9);
        std::cout << info.substr(0,9) << ".";
    }
    std::cout << "|";
    return;
}

void        contact::ft_present_info(int i) const
{
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << i + 1 << "|";
    ft_write_info(this->_first_name);
    ft_write_info(this->_last_name);
    ft_write_info(this->_nickname);
    std::cout << std::endl;
    return;
}

void        contact::ft_full_info(void) const
{
	std::cout << "First name:      " << this->_first_name << std::endl;
	std::cout << "Last name:       " << this->_last_name << std::endl;
	std::cout << "Nickname:        " << this->_nickname << std::endl;
	std::cout << "Login:           " << this->_login << std::endl;
	std::cout << "Postal address:  " << this->_postal_address << std::endl;
	std::cout << "e-mail address:  " << this->_email_address << std::endl;
	std::cout << "Phone number:    " << this->_phone_number << std::endl;
	std::cout << "Birthday date:   " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal:   " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret:  " << this->_darkest_secret << std::endl;
    return;
}