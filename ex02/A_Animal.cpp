/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:05:11 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 16:00:40 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal()
{
    type = "A_Animal";
    std::cout << "A_Animal class: Default constructor called" << std::endl;
};

A_Animal::A_Animal(const A_Animal &old)
{
    std::cout << "A_Animal class: Copy constructor called" << std::endl;
    *this = old;
};

A_Animal &A_Animal::operator=(const A_Animal &old)
{
    std::cout << "A_Animal class: Copy assignment operator called" << std::endl;
    if (this != &old)
        this->type = old.type;
    return (*this);
};

std::string A_Animal::getType() const
{
    return type;
};

A_Animal::~A_Animal()
{
    std::cout << "A_Animal class: Destructor called" << std::endl;
};