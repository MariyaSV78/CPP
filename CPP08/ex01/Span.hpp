#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <string>
# include <algorithm>


class Span 

{
    private:
        unsigned int        _N;
        std::vector<int>    _vect;

    public:
        Span();
        Span(unsigned int N);
        ~Span();

        Span(Span const& src);
        Span& operator=(Span const& rhs);

        void    addNumb(int nbr);
        int     shortestSpan();
        int     longestSpan();


        class maxN: public std::exception
        {
            const char *what() const throw()
                return ("Max size of conteiner is riched");
        };

        class noNbr: public std::exception
        {
            const char *what() const throw()
                return "There is one or any Nbr";
        };

};



#endif