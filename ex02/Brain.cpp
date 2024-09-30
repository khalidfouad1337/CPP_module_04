/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:09:57 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 15:09:59 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain class: Default constructor called" << std::endl;
};

Brain::Brain(const Brain &old)
{
    std::cout << "Brain class: Copy constructor called" << std::endl;
    *this = old;
};

Brain &Brain::operator=(const Brain &old)
{
    std::cout << "Brain class: Copy assignment operator called" << std::endl;
    if (this != &old)
    {
        for (size_t i = 0; i < 100; i++)
        {
            ideas[i] = (old.ideas)[i];
        }
    }
    return (*this);
};

Brain::~Brain()
{
    std::cout << "Brain class: Destructor called" << std::endl;
};