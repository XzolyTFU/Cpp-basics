#include <iostream>
#include <cmath>
int main()
{
    double a;
    double b;
    double c;
    std::cout << "Give me a :\n";
    std::cin >> a;
    std::cout << "Give me b :\n";
    std::cin >> b;
    std::cout << "Give me c :\n";
    std::cin >> c;
    double d = pow(b,2) - 4*a*c;
    if (d < 0)
    {
        std::cout << "This formula doesn't have roots\n"; 
        // because delta is negative. Revise your second degree formula.
    }
    else if (d > 0)
    {
        double x = (-b + sqrt(d)) / 2*a;
        double x2 = (-b - sqrt(d)) / 2*a;
        std::cout << "X : " << x << std::endl;
        std::cout << "X2 : " << x2 << std::endl;
    }
    else if (d = 0)
    {
        double x = -b / (2*a);
        std::cout<< "X : " << x << std::endl;
    }
}