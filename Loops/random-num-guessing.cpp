#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries = 0;
    std::cout << "Welcome to Number guessing game" << std::endl;
    srand(time(NULL));
    num = (rand() % 100 + 1);
    do
    {
        std::cout << "Enter a number between 1-100: ";
        std::cin >> guess;
        tries++;
        if (guess > num)
        {
            std::cout << "TOO HIGH" << std::endl;
        }
        else if (guess < num)
        {
            std::cout << "TOO LOW" << std::endl;
        }
        else
        {
            std::cout << "CORRECT You took " << tries << " tries" << std::endl;
        }
    } while (guess != num);
    std::cout << "********************************************";
    return 0;
}