/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:06:02 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 15:06:04 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &old);
    ~Cat();
    Cat &operator=(const Cat &old);

    void makeSound() const;
    std::string getType() const;
};

#endif