/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:26:29 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 09:41:03 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << GREEN << "🐶 Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << YELLOW << "🐶 Dog copy constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
    std::cout << ORANGE << "🐶 Dog copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Dog::~Dog()
{
    std::cout << RED << "🐶 Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << PURPLE << "🐶 Woof Woof! 🐶" << RESET << std::endl;
}
