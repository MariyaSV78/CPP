#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "Brain.hpp"
#include <stdlib.h>


int main()
{
    Dog b_dog;
    b_dog.setIdeas(1, "game");
    b_dog.setIdeas(2, "eat");
    b_dog.setIdeas(3, "sleep");
    Dog a_dog = b_dog;

        
    std::cout << "ADDRESS OF dog_1 BRAIN :" << (b_dog.getBrain()) << std:: endl;
	std::cout << "ADDRESS OF dog_2 BRAIN :" << (a_dog.getBrain()) << std:: endl;

    std::cout << "IDEAS OF dog_1 BRAIN :" << (b_dog.getBrain()->getIdeas(1)) << std:: endl;
	std::cout << "IDEAS OF dog_2 BRAIN :" << (a_dog.getBrain()->getIdeas(2)) << std:: endl;  
    std::cout << std::endl;
  

    std::cout << "TABLE OF ANIMALS" << std::endl;

    
    const AAnimal* animal[10];

    for (int i = 0; i < 5; i++)
        animal[i] = new Cat();
    for (int i = 5; i < 10; i++)
        animal[i] = new Dog();

    for (int i = 0; i < 10; i++)
    {
        std::cout << animal[i]->getType();
        animal[i]->makeSound();
    }

    for (int i = 0; i < 10; i++)
        delete animal[i];    

    return 0;
}