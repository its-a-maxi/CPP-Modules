/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:34:24 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/24 12:34:45 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
    return;
}

Pony::~Pony(void)
{
    std::cout << "The " << this->_color << " pony of the " << this->_breed << " breed has depparted" << std::endl;
    return;
}

Pony    *Pony::ponyOnTheHeap(std::string color, std::string breed)
{
    Pony    *heapPony = new Pony;
    heapPony->_color = color;
    heapPony->_breed = breed;
    std::cout << "A new " << heapPony->_color << " pony of the " << heapPony->_breed << " breed has appeared in the Heap" << std::endl;
    delete heapPony;
    return heapPony;
}

void    Pony::ponyOnTheStack(std::string color, std::string breed)
{
    Pony    stackPony;
    stackPony._color = color;
    stackPony._breed = breed;
    std::cout << "A new " << stackPony._color << " pony of the " << stackPony._breed << " breed has appeared in the Stack" << std::endl;
    return;
}

std::string     Pony::get_breed(void) const
{
    return (this->_breed);
}

std::string     Pony::get_color(void) const
{
    return (this->_color);
}