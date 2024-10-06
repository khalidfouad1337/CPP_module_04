/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:06:24 by kfouad            #+#    #+#             */
/*   Updated: 2024/10/06 19:19:40 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog class: Default constructor called" << std::endl;
    brain = new Brain();
    type = "Dog";
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
    {
        type = old.type;
        brain = new Brain(*old.brain);
    }
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
    delete brain;
};