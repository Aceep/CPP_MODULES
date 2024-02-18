#include "whatever.hpp"

int main()
{
    try {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
        std::cout << std::endl;
        std::cout << "=== INT ===" << std::endl;
        int e = 2;
        int f = 3;
        std::cout << "a = " << e << ", b = " << f << std::endl;
        swap<int>(a, f);
        std::cout << "Swap: " ;
        std::cout << "a = " << a << ", f = " << f << std::endl;
        std::cout << "min(e, f) = " << min<int>(e, f) << std::endl;
        std::cout << "max(e, f) = " << max<int>(e, f) << std::endl;
        std::cout << std::endl;
        std::cout << "=== CHAR ===" << std::endl;
        char g = 'a';
        char h = 'b';
        std::cout << "g = " << g << ", h = " << h << std::endl;
        swap<char>(g, h);
        std::cout << "Swap: " ;
        std::cout << "g = " << g << ", h = " << h << std::endl;
        std::cout << "min(g, h) = " << min<char>(g,h) << std::endl;
        std::cout << "max(g, h) = " << max<char>(g, h) << std::endl;
        std::cout << std::endl;
        std::cout << "=== FLOAT ===" << std::endl;
        float i = 2.5f;
        float j = 3.5f;
        std::cout << "i = " << i << ", j = " << j << std::endl;
        swap<float>(i, j);
        std::cout << "Swap: " ;
        std::cout << "i = " << i << ", j = " << j << std::endl;
        std::cout << "min(i, j) = " << min<float>(i, j) << std::endl;
        std::cout << "max(i, j) = " << max<float>(i, j) << std::endl;
        std::cout << std::endl;
        std::cout << "=== DOUBLE ===" << std::endl;
        double k = 2.5;
        double l = 3.5;
        std::cout << "k = " << k << ", l = " << l << std::endl;
        swap<double>(k, l);
        std::cout << "Swap: " ;
        std::cout << "k = " << k << ", l = " << l << std::endl;
        std::cout << "min(k, l) = " << min<double>(k, l) << std::endl;
        std::cout << "max(k, l) = " << max<double>(k, l) << std::endl;
        std::cout << std::endl;
        int a1 = 2;
	    int b1 = 3;
	    ::swap( a1, b1 );
	    std::cout << "a1 = " << a1 << ", b1 = " << b1 << std::endl;
	    std::cout << "min( a1, b1 ) = " << ::min( a1, b1 ) << std::endl;
	    std::cout << "max( a1, b1 ) = " << ::max( a1, b1 ) << std::endl;
	    a1 = -2;
	    std::cout << "a1 = " << a1 << ", b1 = " << b1 << std::endl;
	    std::cout << "min( a1, b1 ) = " << ::min( a1, b1 ) << std::endl;
	    std::cout << "max( a1, b1 ) = " << ::max( a1, b1 ) << std::endl;
	    std::string c1 = "chaine1";
	    std::string d1 = "chaine2";
	    ::swap(c1, d1);
	    std::cout << "c1 = " << c1 << ", d1 = " << d1 << std::endl;
	    std::cout << "min( c1, d1 ) = " << ::min( c1, d1 ) << std::endl;
	    std::cout << "max( c1, d1 ) = " << ::max( c1, d1 ) << std::endl
	    	<< std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}   