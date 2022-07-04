#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain*  _brain;
   
    public:
        Dog();
        Dog(std::string);
        Dog(Dog const& ClassCopy);
        virtual ~Dog();

        Dog&    operator=(Dog const& rhs);

        virtual void makeSound() const;
        Brain*       getBrain() const;
        void         setIdeas(int i, std::string str);
};      

#endif