#include "AAnimal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor \"Brain class\" colled" << std::endl;
}

Brain::Brain(Brain const& classCopy)
{
    std::cout << "Constructor copy in \"Brain class\" called" << std::endl;
    *this = classCopy;
}

Brain::~Brain()
{
    std::cout << "Destructor in \"Brain class\" called" << std::endl;
}


Brain&  Brain::operator=(Brain const& rhs)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return *this;
}

std::string    Brain::getIdeas(int i)
{
    return _ideas[i];
}

void    Brain::setIdea(int i, std::string idea)
{
    _ideas[i] = idea;
}