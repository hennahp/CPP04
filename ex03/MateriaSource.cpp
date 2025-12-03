/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:22:03 by hparveen          #+#    #+#             */
/*   Updated: 2025/12/03 09:20:26 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    for(int i = 0; i < 4; i++)
    {
        if(other._materias[i])
            _materias[i] = other._materias[i]->clone();
        else
            _materias[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if(this != &other)
    {
        for(int i = 0; i < 4; i++)
        {
            if(_materias[i])
            {
                delete _materias[i];
                _materias[i] = NULL;
            }
            if(other._materias[i])
                _materias[i] = other._materias[i]->clone();
            else
                _materias[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(_materias[i])
            delete _materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if(!m)
        return;
    for(int i = 0; i < 4; i++)
    {
        if(!_materias[i])
        {
            _materias[i] = m;
            return;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
    for(int i = 0; i < 4; i++)
    {
        if(_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return NULL;
}