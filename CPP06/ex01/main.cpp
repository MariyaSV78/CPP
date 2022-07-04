#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

void    print_data(Data *data)
{
	std::cout << "i = " << data->i << std::endl;
	std::cout << "ch = " << data->ch << std::endl;
	std::cout << "f =  " << data->f << std::endl;
}


int     main()
{
    Data        *data = new Data();
    uintptr_t   d_serialize;
    Data        *d_deserialize;


    data->i = 42;
    data->ch = 'E';
    data->f = 42.042f;
 
    std::cout << "Data adress : " << data <<std::endl;
    std::cout << "Data: " << std::endl; 
    print_data(data);
    std::cout << std::endl;
 
    d_serialize = serialize(data);
    std::cout << "Data serialized uintptr_t: " << d_serialize <<std::endl;
    d_deserialize = deserialize(d_serialize);
    
    std::cout << "Data deserialized address: " << d_deserialize << " = " << data <<std::endl;
  
    delete data;
    return 0;
}