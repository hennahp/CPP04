/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:19:51 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 12:05:22 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << YELLOW << "Animal copy constructor called" << RESET << std::endl;
    _type = other._type;    
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << ORANGE << "Animal copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << RED << "Animal destructor called" << RESET << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}
