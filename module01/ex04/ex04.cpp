/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:30:54 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 17:42:04 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int     main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string     *ptr = &str;
    std::string     &ref = str;

    std::cout << "Printing from the pointer:   " << *ptr << std::endl;
    std::cout << "Printing from the reference: " << ref << std::endl;
    return (0);
}