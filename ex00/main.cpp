/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:38:48 by kfouad            #+#    #+#             */
/*   Updated: 2024/10/06 18:53:41 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
    {
        std :: cout << "------<<Animal>>------<<Cat>>------<<Dog>>------" << std :: endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    {
		std :: cout << "------<<WrongAnimal>>------<<WrongCat>>------" << std :: endl;
		const WrongAnimal *meta	= 	new WrongAnimal();
		const WrongAnimal	*i 	= 	new WrongCat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete 	meta;
		delete 	i ;
	}
return 0;
}