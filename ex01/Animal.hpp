/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:05:21 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 15:05:23 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &old);
    virtual ~Animal();
    Animal &operator=(const Animal &old);

    virtual void makeSound() const;
    virtual std::string getType() const;
};

#endif