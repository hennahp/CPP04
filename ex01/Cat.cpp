/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:37:42 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 10:47:24 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    brain = new Brain();
    std::cout << GREEN << "🐱 Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << YELLOW << "🐱 Cat copy constructor called" << RESET << std::endl;
    brain = new Brain(*(other.brain));
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << ORANGE << "🐱 Cat copy assignment operator called" << RESET << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }    
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << RED << "🐱 Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << PURPLE << "🐱 Meow Meow! 🐱" << RESET << std::endl;
}

Brain *Cat::getBrain() const
{
    return this->brain;
}