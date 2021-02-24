/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:53:17 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 12:43:13 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int     main(void)
{
    std::cout << std::endl << "-- Ponies on the Heap do some stuff: --" << std::endl;
    Pony    *pony1 = Pony::ponyOnTheHeap("Pink", "Appaloosa");
    Pony    *pony2 = Pony::ponyOnTheHeap("Brown", "Bashkir Curly");
    std::cout << std::endl;

    std::cout << "-- Ponies on the Stack do some stuff: --" << std::endl;
    Pony::ponyOnTheStack("Black", "Clydesdales");
    Pony::ponyOnTheStack("Blue", "Fjord Horse of Norway");
    std::cout << std::endl;

    std::cout << "Checking if the heap memory for pony1 still exist = " << pony1->get_color() << std::endl;
    std::cout << "Checking if the heap memory for pony2 still exist = " << pony2->get_color() << std::endl;
    std::cout << std::endl;

    return (0);
}