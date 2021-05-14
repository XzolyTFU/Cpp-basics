#include <iostream>
#include <cmath>
int main()
{
    int a;
    int b;
    int c;
    std::cout << "Give me a :\n";
    std::cin >> a;
    std::cout << "Give me b :\n";
    std::cin >> b;
    std::cout << "Give me c :\n";
    std::cin >> c;
    while (a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "Give me a :\n";
        std::cin >> a;
        std::cout << "Give me b :\n";
        std::cin >> b;
        std::cout << "Give me c :\n";
        std::cin >> c;
    }
    if (a > b+c || b > c + a || c > b + a)
    {
        std::cout << "You are not able to form a triangle\n";
    }
    else 
    {
        std::cout << "You are able to form a triangle\n";
    }
}    