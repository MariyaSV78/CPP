#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>




class Base 
{
    private:

    public:
        virtual ~Base();
};


Base *	generate(void);
void	identify_ptr(Base* p);
void	identify_ref(Base& p);

#endif