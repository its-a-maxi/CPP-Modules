/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombieevent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:49:15 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 14:03:48 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class   ZombieEvent
{
    public:
        ZombieEvent(void);
        ~ZombieEvent(void);

        void        setZombieType(std::string type);
        Zombie*     newZombie(std::string name);
        Zombie*     randomChump(void);
    private:
        std::string     _type;
        Zombie*         _zombie;
};

#endif