#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Default constructor \"WrongCat class\" colled" << std::endl;
}
        
WrongCat::WrongCat(std::string type) 
{
    this->_type = type;
    std::cout << "\"WrongCat\" constructor with name called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& ClassCopy)
{
    std::cout << "Constructor copy in \"WrongCat class\" called" << std::endl;
    *this = ClassCopy;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor in \"WrongCat class\" called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    this->_type = rhs._type; //(rhs.getType())
    return *this; 
}

void    WrongCat::makeSound() const
{
    std::cout << _type << " fait \"Miaou - Miaou\"" << std::endl;
}
