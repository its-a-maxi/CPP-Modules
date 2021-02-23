#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class contact
{

public:
    contact(void);
    ~contact(void);
    int             ft_used(void) const;
    void            ft_save_info(void);
    void            ft_present_info(int i) const;
    void            ft_full_info(void) const;
    
private:
    int             _used;
    std::string     _first_name;
    std::string     _last_name;
    std::string     _nickname;
    std::string     _login;
    std::string     _postal_address;
    std::string     _email_address;
    std::string     _phone_number;
    std::string     _birthday_date;
    std::string     _favorite_meal;
    std::string     _underwear_color;
    std::string     _darkest_secret;

};

#endif