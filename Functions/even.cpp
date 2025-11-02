#include <iostream>

void EvenOdd(int number);
int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    EvenOdd(number);
    return 0;
}

void EvenOdd(int number)
{
    if (number % 2 == 0)
    {
        std::cout << "The number " << number << " is Even";
    }
    else
    {
        std::cout << "The number " << number << " is Odd";
    }
}