/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:10:05 by hparveen          #+#    #+#             */
/*   Updated: 2025/11/26 13:23:18 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria();
        AMateria(const std::string &type);
        AMatreia(const AMateria &other);
        
}


#endif