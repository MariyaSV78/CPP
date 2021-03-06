#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(std::string);
        Dog(Dog const& ClassCopy);
        virtual ~Dog();

        Dog&    operator=(Dog const& rhs);

        virtual void makeSound() const;
};      

#endif