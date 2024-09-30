/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:55:18 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 13:55:34 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat class: Default constructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat &old)
{
    std::cout << "WrongCat class: Copy constructor called" << std::endl;
    *this = old;
};

WrongCat &WrongCat::operator=(const WrongCat &old)
{
    std::cout << "WrongCat class: Copy assignment operator called" << std::endl;
    if (this != &old)
        type = old.type;
    return (*this);
};

std::string WrongCat::getType() const
{
    return type;
};

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound!" << std::endl;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat class: Destructor called" << std::endl;
};