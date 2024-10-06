/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:05:11 by kfouad            #+#    #+#             */
/*   Updated: 2024/10/06 19:17:25 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal class: Default constructor called" << std::endl;
    type = "Animal";
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
        this->type = old.type;
    return (*this);
};

std::string Animal::getType() const
{
    return type;
};
void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal class: Destructor called" << std::endl;
};