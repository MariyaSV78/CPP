#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>
#include <exception>




int     main()
{
    {
        std::cout << "------VECTOR int--------" << std::endl;
        std::vector<int>    v;
        v.push_back(2);
        v.push_back(4);
        v.push_back(6);
        v.push_back(8);
        v.push_back(1);

        try {std::cout << easyfind(v, 20);}
        catch(std::exception& e){std::cout << e.what() << std::endl;}
        
        try {std::cout << easyfind(v, 6);}
        catch(std::exception& e){std::cout << e.what() << std::endl;}
    }

    std::cout << std::endl;
    {
        std::cout << "------SET int--------" << std::endl;
        std::set<int>     set;

        set.insert(2);
        set.insert(3);
        set.insert(6);
        set.insert(8);
        set.insert(1);

        try {std::cout << easyfind(set, 20);}
        catch(std::exception& e){std::cout << e.what() << std::endl;}

        try {std::cout << easyfind(set, 1);}
        catch(std::exception& e){std::cout << e.what() << std::endl;}
    }

    std::cout << std::endl;
    {
        std::cout << "------LIST int--------" << std::endl;
        std::list<int>     list;
        list.push_back(2);
        list.push_back(8);
        list.push_back(6);
        list.push_back(8);
        list.push_back(1);
    

        try {std::cout << easyfind(list, 35);}
        catch(std::exception& e){std::cout << e.what() << std::endl;}

        try {std::cout << easyfind(list, 8);}
        catch(std::exception& e){std::cout << e.what() << std::endl;}
    }
        std::cout << std::endl;


    return 0;

}