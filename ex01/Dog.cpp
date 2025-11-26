/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:26:29 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 10:45:37 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    brain = new Brain();
    std::cout << GREEN << "🐶 Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << YELLOW << "🐶 Dog copy constructor called" << RESET << std::endl;
    brain = new Brain(*(other.brain));
}

Dog &Dog::operator=(const Dog &other) 
{
    std::cout << ORANGE << "🐶 Dog copy assignment operator called" << RESET << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }    
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << RED << "🐶 Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << PURPLE << "🐶 Woof Woof! 🐶" << RESET << std::endl;
}

Brain *Dog::getBrain() const
{
    return this->brain;
}