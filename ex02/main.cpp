/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:46:13 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 12:11:18 by hparveen         ###   ########.fr       */
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
    std::cout << "\n--- Creating Animals ---\n" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << "\n--- Animal Types ---\n" << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    std::cout << "\n--- Making Sounds ---\n" << std::endl;
    dog->makeSound();
    cat->makeSound();
    
    std::cout << "\n--- Deleting Animals ---\n" << std::endl;
    delete dog;
    delete cat;
    return 0;
}
