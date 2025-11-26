/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:44:04 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 09:45:46 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << GREEN << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << YELLOW << "WrongAnimal copy constructor called" << RESET << std::endl;
    _type = other._type;    
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << ORANGE << "WrongAnimal copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << PURPLE << "WrongAnimal makes a sound" << RESET << std::endl;
}