/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:54:20 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 13:54:22 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &old);
    ~Dog();
    Dog &operator=(const Dog &old);

    void makeSound() const;
    std::string getType() const;

    void ft()
    {
        std::cout << "ft sound!" << std::endl;
    };
};

#endif