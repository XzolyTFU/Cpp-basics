#include <iostream>
#include <string>
int main()
{
    std::string phrase;
    std::cout << "Write your scentence : " << std::endl;
    getline(std::cin , phrase);
    int acounter = 0;
    for ( int i = 0 ; i < phrase.size() ; i++ )
    {
        if ( phrase[i] == 'a' )
        {
            acounter = acounter + 1;   
        }
    }
    std::cout << "You have " << acounter << " a.\n"; 
}