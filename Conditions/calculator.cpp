#include <iostream>

int main()
{
    std::cout << "******* CALCULATOR ******" << std::endl;
    char op;
    double num1, num2, result;
    bool is_valid = true;
    std::cout << "Enter the Operation: ";
    std::cin >> op;
    std::cout << "Enter Number1: ";
    std::cin >> num1;
    std::cout << "Enter Number2: ";
    std::cin >> num2;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            std::cout << "Can't Divide by zero" << std::endl;
            is_valid = false;
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
        std::cout << "Invalid Operator" << std::endl;
        is_valid = false;
        break;
    }
    if (is_valid)
    {
        std::cout << "Result " << result << std::endl;
    }
    std::cout << "*******************" << std::endl;
    return 0;
}
