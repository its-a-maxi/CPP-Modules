/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:49:15 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:05:17 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <random>

class   Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);

        void            announce(void) const;
        void            set_name(std::string name);
        void            set_type(std::string type);
        std::string     get_name(void) const;
        std::string     get_type(void) const;

    private:
        std::string     _name;
        std::string     _type;
};

#endif