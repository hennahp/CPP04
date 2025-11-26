/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:34:41 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 10:39:22 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << GREEN << "Brain default constructor called" << RESET << std::endl;     
}

Brain::Brain(const Brain &other)
{
    std::cout << YELLOW << "Brain copy constructor called" << RESET << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << ORANGE << "Brain copy assignment operator called" << RESET << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
    else
        std::cerr << RED << "Index out of bounds!" << RESET << std::endl;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return this->ideas[index];
    else
    {
        std::cerr << RED << "Index out of bounds!" << RESET << std::endl;
        return "";
    }
}