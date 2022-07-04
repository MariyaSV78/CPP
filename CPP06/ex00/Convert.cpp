#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(std::string str): _input(str) // atof(str.c_str())
{
    if (_input.size() == 1 && !isdigit(_input.c_str()[0]))
        _d = static_cast<double>(_input.c_str()[0]);
    else 
        _d = atof(_input.c_str());
    if (_input.size() > 1 && !isdigit(_input.c_str()[0]) && !_d)
        throw IsBadArguments();
}

Convert::~Convert()
{}

Convert::Convert(Convert const& ClassCopy)
{
    *this = ClassCopy;
}

Convert& Convert::operator=(Convert const& rhs)
{
    if(this != &rhs)
        _input = rhs._input;
    return *this;
}

void    Convert::toChar()
{
    std::cout << "char: ";
    if (std::isnan(_d) || std::isinf(_d))
        throw IsImpossibleExept();
    else if (!isprint(static_cast<char>(_d)))
        throw IsNotDisplay();
    else 
        std::cout << static_cast<char>(_d) << std::endl;
}

void    Convert::toInt()
{
    std::cout << "int: ";
    if (std::isnan(_d) || std::isinf(_d))
        throw IsImpossibleExept();
    else 
        std::cout << static_cast<int>(_d) << std::endl;
}

void    Convert::toDouble()
{
    std::cout << "double: ";
    std::cout << static_cast<double>(_d);
    if(std::fmod(_d,1) == 0)
        std::cout << ".0";
    std::cout << std::endl;
}

void    Convert::toFloat()
{
    std::cout << "float: ";
    std::cout << static_cast<float>(_d);
    if(std::fmod(_d,1) == 0)
        std::cout << ".0";
    std::cout << 'f' << std::endl;
}

Convert::IsBadArguments::IsBadArguments()
{
    return;
}
Convert::IsBadArguments::~IsBadArguments() throw()
{
    return;
}

const char*     Convert::IsBadArguments::what() const throw()
{
    return("Bad arguments");
}

Convert::IsImpossibleExept::IsImpossibleExept()
{
    return;
}
Convert::IsImpossibleExept::~IsImpossibleExept() throw()
{
    return;
}

const char*     Convert::IsImpossibleExept::what() const throw()
{
    return("impossible");
}

Convert::IsNotDisplay::IsNotDisplay()
{
    return;
}
Convert::IsNotDisplay::~IsNotDisplay() throw()
{
    return;
}

const char*     Convert::IsNotDisplay::what() const throw()
{
    return("Non displayable");
}


