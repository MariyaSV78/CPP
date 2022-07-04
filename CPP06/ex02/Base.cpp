#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base(){}

Base *	generate(void)
{
    srand (time(NULL));

    int i = rand() % 3;
    Base *ptr;

    if (i == 0)
    {
        ptr = new A;
        std::cout << "Instance of class A generated" << std::endl;
    }
    else if(i == 1)
    {
        ptr = new B;
        std::cout << "Instance of class B generated" << std::endl;
    }
    else
    {
        ptr = new C;
        std::cout << "Instance of class C generated" << std::endl;
    }
    return (ptr);
}

void	identify_ptr(Base* p)
{
        if (dynamic_cast<A*>(p))
                std::cout << "It's a class A!" << std::endl;
        else if (dynamic_cast<B*>(p))
                std::cout << "It's a class B!" << std::endl;
        else if (dynamic_cast<C*>(p))
                std::cout << "It's a class C!" << std::endl;  
}


void	identify_ref(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "It's a class A!" << std::endl;
    }
    catch(std::exception){}
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "It's a class B!" << std::endl;
    }
    catch(std::exception){}
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "It's a class C!" << std::endl;
    }
    catch(std::exception){}
}