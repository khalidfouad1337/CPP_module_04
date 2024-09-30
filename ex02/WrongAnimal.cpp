/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:07:21 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 15:07:37 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal class: Default constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
    std::cout << "WrongAnimal class: Copy constructor called" << std::endl;
    *this = old;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &old)
{
    std::cout << "WrongAnimal class: Copy assignment operator called" << std::endl;
    if (this != &old)
        type = old.type;
    return (*this);
};

std::string WrongAnimal::getType() const
{
    return type;
};
void WrongAnimal::makeSound() const
{
    std::cout << "no sound!" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal class: Destructor called" << std::endl;
};