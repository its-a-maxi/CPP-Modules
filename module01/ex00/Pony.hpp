/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:22:42 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 12:29:43 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class   Pony
{
    public:
        Pony(void);
        ~Pony(void);
        
        static Pony     *ponyOnTheHeap(std::string color, std::string breed);
        static void     ponyOnTheStack(std::string color, std::string breed);
        std::string     get_breed(void) const;
        std::string     get_color(void) const;

    private:
        std::string     _color;
        std::string     _breed;
};

#endif