#include <iostream>
#include <cmath>
int main()
{
    double a;
    std::cout << "Give me a : ";
    std::cin >> a;
    double x;
    std::cout << "Give me your guess :";
    std::cin >> x;
    while (x > sqrt(a))
    {
        double x1 = (x+a/x) / 2;
        x = x1;
        std::cout << "The approximate square root of " << a << " is " << x1  << std::endl;
    }
}