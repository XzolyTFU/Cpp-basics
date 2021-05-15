#include <iostream>
#include <cstdlib>
#include <ctime>
void play_game()
{
    int random = rand() % 101;
    int guess;
    int score = 10;
    std::cout << "What is your guess : " << std::endl;
    std::cin >> guess;
    while (guess < random )
    {
        std::cout << "Your guess is lower. Guess again : " << std::endl;
        score = score - 1;
        std::cin >> guess;
        if (score == 0)
        {
            std::cout << "You suck at this game bro hahahaha."<< std::endl;
            break;
        }
    }
    while (guess > random )
    {
        std::cout << "Your guess is higher. Guess again : " << std::endl;
        score = score - 1;
        std::cin >> guess;
        if (score == 0)
        {
            std::cout << "You suck at this game bro hahahaha." << std::endl;
            break;
        }
    }
    if ( guess == random )
    {
        std::cout << "You guessed the right answer. " << std::endl << "And you got a score " << score << "/10." << std::endl; 
    }
}
int main()
{
    srand(time(NULL));
    int choice;
    do
    {   
        std::cout << "Wanna play guessing game?" << std::endl << "0 : Quit" << std::endl << "1 : Play the game.\n";
        std::cin >> choice;
        switch(choice)
        {
            case 0:
            std::cout << "Thanks for nothing.";
            return 0;
            case 1:
            play_game();
            break;
        }

    } while (choice != 0 );
}    
