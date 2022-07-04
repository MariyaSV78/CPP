#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << std::endl;

    
    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "chaine1 = " << a << ", chaine1 = " << b << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << std::endl;

    float l = 56.03;
    float k = 56.3;
    std::cout << "l = " << l << ", k = " << k << std::endl;
    ::swap( l, k );
    std::cout << "l = " << l << ", k = " << k << std::endl;
    std::cout << "min( l, k ) = " << ::min( l, k ) << std::endl;
    std::cout << "max( l, k ) = " << ::max( l, k ) << std::endl;
    std::cout << std::endl;

    return 0;
}
