#include "Base.hpp"

int main()
{
    Base* base = generate();
    std::cout << "IDENTIFY BASE PTR" << std::endl;
    identify_ptr(base);
    std::cout << "IDENTIFY BASE REF" << std::endl;
    identify_ref(*base);
    delete base;
    return 0;
}