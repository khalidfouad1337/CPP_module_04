/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:53:01 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 13:53:20 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat class: Default constructor called" << std::endl;
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
        type = old.type;
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
    std::cout << "Cat class: Destructor called" << std::endl;
};