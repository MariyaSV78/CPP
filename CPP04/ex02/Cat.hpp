#ifndef CAT_HPP
# define CAT_HPP

 # include "AAnimal.hpp"
 # include "Brain.hpp"


class Cat : public AAnimal
{
    private:
        Brain*  _brain;

    public:
        Cat();
        Cat(std::string);
        Cat(Cat const& ClassCopy);
        virtual ~Cat();

        Cat&    operator=(Cat const& rhs);

        virtual void    makeSound() const;
        Brain*          getBrain() const;
        void            setIdeas(int i, std::string str);
};

#endif