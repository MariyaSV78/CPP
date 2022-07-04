#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Default constructor \"Cat class\" colled" << std::endl;
}
        
Cat::Cat(std::string type) 
{
    this->_type = type;
    std::cout << "\"Cat\" constructor with name called" << std::endl;
}

Cat::Cat(Cat const& ClassCopy)
{
    std::cout << "Constructor copy in \"Cat class\" called" << std::endl;
    *this = ClassCopy;
}

Cat::~Cat()
{
    std::cout << "Destructor in \"Cat class\" called" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (&rhs == this)
        return *this;
    this->_type = rhs._type; //(rhs.getType())
    return *this; 
}

void    Cat::makeSound() const
{
    std::cout << _type << " fait \"Miaou - Miaou\"" << std::endl;
}
