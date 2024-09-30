/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:09:43 by kfouad            #+#    #+#             */
/*   Updated: 2024/09/30 15:10:14 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &old);
    virtual ~Brain();
    Brain &operator=(const Brain &old);
};

#endif