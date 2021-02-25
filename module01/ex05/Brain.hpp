/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:49:15 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:05:17 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class   Brain
{
    public:
        Brain(void);
        ~Brain(void);

        unsigned long   *identify(void) const;
        std::string     get_thought(void) const;
        void            set_thought(std::string thought);

    private:
        std::string     _thought;
};

#endif