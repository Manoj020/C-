#include <iostream>
#include <ctime>
char userChoice();
char computerChoice();
void result(char user_choice, char computer_choice);
int main()
{
    srand(time(NULL));
    char user;
    char computer;
    user = userChoice();
    computer = computerChoice();
    result(user, computer);
    return 0;
}

char userChoice()
{
    char choice;
    do
    {
        std::cout << "*******************" << std::endl;
        std::cout << "Rock-Paper-Scissor Game" << std::endl;
        std::cout << "'r' is For Rock" << std::endl;
        std::cout << "'p' is For Paper" << std::endl;
        std::cout << "'s' is For Scissors" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 'r':
            std::cout << "You Picked Rock" << std::endl;
            return choice;
        case 'p':
            std::cout << "You Picked Paper" << std::endl;
            return choice;
        case 's':
            std::cout << "You Picked Scissors" << std::endl;
            return choice;
        default:
            std::cout << "That was a Invalid Choice Please Try again!" << std::endl;
        }
    } while (choice != 'r' && choice != 'p' && choice != 's');
}
char computerChoice()
{
    int random_num;
    random_num = (rand() % 3 + 1);
    if (random_num == 1)
    {
        std::cout << "The computer Picked Rock" << std::endl;
        return 'r';
    }
    else if (random_num == 2)
    {
        std::cout << "The Computer Picked Paper" << std::endl;
        return 'p';
    }
    else
    {
        std::cout << "The Computer Picked Scissors" << std::endl;
        return 's';
    }
}
void result(char user_choice, char computer_choice)
{
    if (user_choice == computer_choice)
    {
        std::cout << "It's a tie!!!" << std::endl;
    }
    else if ((user_choice == 'r' && computer_choice == 's') ||
             (user_choice == 'p' && computer_choice == 'r') ||
             (user_choice == 's' && computer_choice == 'p'))
    {
        std::cout << "YOU WON!!!" << std::endl;
    }
    else
    {
        std::cout << "YOU LOSE!!!" << std::endl;
    }
}