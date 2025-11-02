#include <iostream>
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
int main()
{
    bakePizza("Chicken", "mushrooms");
    return 0;
}

void bakePizza()
{
    std::cout << "Here is Your pizza with no topping" << std::endl;
}

void bakePizza(std::string topping1)
{
    std::cout << "Here is your pizza with " << topping1 << " Topping" << std::endl;
}

void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << " Toppings" << std::endl;
}

//function overloading is like passing many arguments to function the arguments should match the parameters of the function

// it is like defalut and what cases can we have think of it like that