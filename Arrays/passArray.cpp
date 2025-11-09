#include <iostream>
double sumTotal(double prices[], int size);
int main()
{
    double prices[] = {90.1, 100, 30.99, 49.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = sumTotal(prices, size);
    std::cout << "$" << total;
    return 0;
}

double sumTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}