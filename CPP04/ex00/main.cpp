/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:31:45 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:31:48 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "ANIMAL" << std::endl;

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    dog->makeSound(); //will output the cat sound!
    cat->makeSound();
    animal->makeSound();

    delete animal;
    delete dog;
    delete cat;

    std::cout << std::endl;
    std::cout << "WRONG ANIMAL" << std::endl;

    const WrongAnimal* w_animal = new WrongAnimal();
    const WrongAnimal* w_cat = new WrongCat();

    std::cout << w_animal->getType() << std::endl;
    std::cout << w_cat->getType() << std::endl;


    w_cat->makeSound();
    w_animal->makeSound();
 
    delete w_animal;
    delete w_cat;

    return 0;
}
