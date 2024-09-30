/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:53:46 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 13:54:02 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog class: Default constructor called" << std::endl;
};

Dog::Dog(const Dog &old)
{
    std::cout << "Dog class: Copy constructor called" << std::endl;
    *this = old;
};

Dog &Dog::operator=(const Dog &old)
{
    std::cout << "Dog class: Copy assignment operator called" << std::endl;
    if (this != &old)
        type = old.type;
    return (*this);
};

std::string Dog::getType() const
{
    return type;
};

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog class: Destructor called" << std::endl;
};