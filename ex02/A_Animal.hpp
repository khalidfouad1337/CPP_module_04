/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:05:21 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 16:00:06 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <iostream>
#include <string.h>

class A_Animal
{
protected:
    std::string type;

public:
    A_Animal();
    A_Animal(const A_Animal &old);
    virtual ~A_Animal();
    A_Animal &operator=(const A_Animal &old);

    virtual void makeSound() const = 0;
    virtual std::string getType() const;
};

#endif