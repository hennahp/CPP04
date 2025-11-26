/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:47:15 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 09:47:44 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << GREEN << "🐱 WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << YELLOW << "🐱 WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << ORANGE << "🐱 WrongCat copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "🐱 WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << PURPLE << "🐱 WrongCat Meow Meow! 🐱" << RESET << std::endl;
}
