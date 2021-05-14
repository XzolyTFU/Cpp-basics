#include <iostream>
#include <cmath>

int main()
{
    int a;
    int b;
    long int c;
    int n;
    std::cout << "Give me a :\n";
    std::cin >> a;
    std::cout << "Give me b :\n";
    std::cin >> b;
    std::cout << "Give me c :\n";
    std::cin >> c;
    std::cout << "Give me n and make sure it's less or equal to 2 :\n";
    std::cin >> n;
    while (n > 2)
    {
        std::cout << "Give me n and make sure it's less or equal to 2 :\n";
        std::cin >> n; 
    }
    if (pow(a,n) + pow(b,n) == pow(c,n))
    {
        std::cout << "Fermat was right";
    }
    else
    {
        std::cout << "Fermat was wrong";
    }
}