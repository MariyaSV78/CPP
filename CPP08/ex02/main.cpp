/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:16:30 by msosnova          #+#    #+#             */
/*   Updated: 2022/07/07 21:16:32 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>


int main()
{
   
    {
        std::cout << "----------MUTANTSACK----------" << std::endl;
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        std::cout << std::endl;
        
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        std::cout << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << std::endl;
    


        std::cout << "----------STACK----------" << std::endl;
        std::stack<int> s(mstack);

        s.push(5);
        s.push(17);
        std::cout << s.top() << std::endl;
        std::cout << std::endl;
        
        s.pop();
        std::cout << s.size() << std::endl;
        
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        std::cout << std::endl;
        // MutantStack<int>::iterator it = s.begin();
        // MutantStack<int>::iterator ite = s.end();

        int S = ((int)s.size());
        for(int i = 0; i < S; i++)
        {
            std::cout << s.top() << std::endl;
            s.pop();
        }

    }

    {
        std::cout << "----------LIST----------" << std::endl;
        std::list<int> lst;

        lst.push_back(5);
        lst.push_back(17);
        std::cout << lst.back() << std::endl;
        std::cout << std::endl;
        
        lst.pop_back();
        std::cout << lst.size() << std::endl;
        
        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);
        std::cout << std::endl;
        std::list<int>::iterator it = lst.begin();
        std::list<int>::iterator ite = lst.end();
        
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << std::endl;
    }

    return 0;
}
