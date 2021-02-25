/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:49:15 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 15:05:17 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class   Human
{
    public:
        Human(void);
        ~Human(void);

        const Brain     &getBrain(void) const;
	    unsigned long   *identify(void) const;

    private:
        const Brain     _brain;
};

#endif