/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:46:13 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 10:57:09 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    const int size = 4;
    Animal *animals[size];

    std::cout << "\n--- Creating Animals ---\n" << std::endl;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Making Sounds ---\n" << std::endl;
    for (int i = 0; i < size; i++)
    {
        animals[i]->makeSound();
    }

    std::cout << "\n--- Deleting Animals ---\n" << std::endl;
    for (int i = 0; i < size; i++)
    {
        delete animals[i];
    }
    
    std::cout << "\n--- Testing Deep Copy ---\n" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdea(0, "Eat");
    Dog dog2 = dog1; 
    dog2.getBrain()->setIdea(0, "Sleep");

    std::cout << "Dog1 brain Idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 brain Idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}
