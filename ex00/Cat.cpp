/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:37:42 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 09:41:35 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << GREEN << "🐱 Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << YELLOW << "🐱 Cat copy constructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << ORANGE << "🐱 Cat copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Cat::~Cat()
{
    std::cout << RED << "🐱 Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << PURPLE << "🐱 Meow Meow! 🐱" << RESET << std::endl;
}