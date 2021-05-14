#include <iostream>
int main()
{
    unsigned long long int x;
    std::cout << "Input your number : ";
    std::cin >> x;
    unsigned long int factorial = x; 
    for (unsigned long int i = factorial -1;i > 1;i--)
    {
        factorial = factorial * i;
    }
    std::cout << "The factorial of " << x << " is " << factorial << std::endl;
}