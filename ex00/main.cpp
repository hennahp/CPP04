/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:46:13 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 09:58:03 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "\n--- Correct Polymorphism ---\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();    
    const Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    
    std::cout << "\n--- Incorrect Polymorphism ---\n" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << std::endl;
    std::cout << wrongCat->getType() << std::endl;
    std::cout << std::endl;
    
    wrongCat->makeSound();
    wrongMeta->makeSound(); 
    std::cout << std::endl;

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
