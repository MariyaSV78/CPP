/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:15:12 by msosnova          #+#    #+#             */
/*   Updated: 2022/07/07 21:15:15 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>
#include <ctime>

Span::Span(): _N(0){}

Span::Span(unsigned int N): _N(N){}

Span::Span(Span const& ClassCopy)
{
    *this = ClassCopy;
}

Span& Span::operator=(Span const& rhs)
{
    if(&rhs == this)
        return *this;
    _N = rhs._N;
    return *this;
}

Span::~Span(){}

void    Span::addNumber(int nbr)
{
    if(_v.size() > _N)
        throw maxN();
    _v.push_back(nbr);
} 

void    Span::addNumberMulti(unsigned int N)
{
    int t;
    srand(time(NULL));
 
    for(unsigned int i = 0; i < N; i++)
    {
        if(_v.size() > _N)
            throw maxN();
        t =rand() % _N;
        _v.push_back(t);
        std::cout << t << std::endl;
    }
} 

int     Span::longestSpan()
{
    if(_v.empty() || _v.size() <= 1)
        throw noNbr();
    int max = *std::max_element(_v.begin(), _v.end());
    int min = *std::min_element(_v.begin(), _v.end());
    return(max - min);
}

int     Span::shortestSpan()
{
    int min;
    int tmp;
 
    if(_v.empty() || _v.size() <= 1)
        throw noNbr();
    std::vector<int>::iterator  it;

     
    for(it = _v.begin(); it != _v.end(); it++)
    {    
        for(unsigned int i = 1; i < _N; i++)
        {
            tmp = abs(*it - *(it + i));
            if (tmp < min )
                min = tmp;
        }
    }
    return min;
}





    // for(it = _v.begin(); it != _v.end(); it++)
    // {
    //     _v.push_back(rand() % _N);
    //     std::cout << *it << std::endl;
    // }
