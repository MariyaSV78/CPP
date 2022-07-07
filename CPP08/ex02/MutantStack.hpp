#ifndef MUTANTSTACH_HPP
# define MUTANTSTACH_HPP

# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    private:
        std::stack<T> _mutantStack;

    public:

        MutantStack(){}

        MutantStack(MutantStack const& CopyClass)
        {
            *this = CopyClass;
        }

        MutantStack& operator=(MutantStack const& rhs)
        {
            if(&rhs == this)
                return *this;
            _mutantStack = rhs._mutantStack;
                return *this;
        }

        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator     iterator;

        iterator    begin()
        {
            return(this->c.begin());
        }

        iterator    end()
        {
            return(this->c.end());
        }





};

#endif