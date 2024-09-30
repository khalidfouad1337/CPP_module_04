/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:05:11 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 15:05:13 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal class: Default constructor called" << std::endl;
};

Animal::Animal(const Animal &old)
{
    std::cout << "Animal class: Copy constructor called" << std::endl;
    *this = old;
};

Animal &Animal::operator=(const Animal &old)
{
    std::cout << "Animal class: Copy assignment operator called" << std::endl;
    if (this != &old)
        type = old.type;
    return (*this);
};

std::string Animal::getType() const
{
    return type;
};
void Animal::makeSound() const {};

Animal::~Animal()
{
    std::cout << "Animal class: Destructor called" << std::endl;
};