/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:05:52 by kfouad            #+#    #+#             */
/*   Updated: 2024/10/06 19:18:28 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat class: Default constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
};

Cat::Cat(const Cat &old)
{
    std::cout << "Cat class: Copy constructor called" << std::endl;
    *this = old;
};

Cat &Cat::operator=(const Cat &old)
{
    std::cout << "Cat class: Copy assignment operator called" << std::endl;
    if (this != &old)
    {
        type = old.type;
        brain = new Brain(*old.brain);
    }
    return (*this);
};

std::string Cat::getType() const
{
    return type;
};

void Cat::makeSound() const
{
    std::cout << "Cat sound!" << std::endl;
};

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat class: Destructor called" << std::endl;
};