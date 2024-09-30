/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:10:22 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 15:10:41 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    size_t len = 4;
    Animal **obj = new Animal *[len];
    for (size_t i = 0; i < len; i++)
    {
        if (i % 2 == 0)
            obj[i] = new Dog();
        else
            obj[i] = new Cat();
    };
    for (size_t i = 0; i < len; i++)
    {
        delete obj[i];
    }
    delete[] obj;
    return 0;
}