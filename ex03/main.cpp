/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:52:28 by hparveen          #+#    #+#             */
/*   Updated: 2025/12/03 08:50:31 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    std::cout << "\n--- Unequip and Save Materia ---\n" << std::endl;
    IMateriaSource* source = new MateriaSource();
    source->learnMateria(new Ice());

    ICharacter* alice = new Character("alice");
    AMateria* iceMateria = source->createMateria("ice");
    alice->equip(iceMateria);

    std::cout << "\n--- Before unequip ---\n" << std::endl;
    alice->use(0, *alice);

    AMateria *saved = iceMateria;
    alice->unequip(0);

    std::cout << "\n--- After unequip ---\n" << std::endl;
    alice->use(0, *alice);
    alice->use(15, *alice); 

    std::cout << "\n--- Re-equipping saved materia ---\n" << std::endl;
    alice->equip(saved);
    alice->use(0, *alice);

    delete alice;
    delete source;
    return 0;
}
