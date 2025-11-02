#include <iostream>

void PayCal(std::string name, double hours_worked, const double PAY_RATE);

int main()
{
    std::cout << "***** Welcome To Pay Calculator*****" << std::endl;
    const double PAY_RATE = 25.0;
    int number_of_employees;
    std::cout << "Enter Number of employees: ";
    std::cin >> number_of_employees;
    for (int i = 0; i < number_of_employees; i++)
    {
        std::string name;
        double hours_worked;
        do
        {
            std::cout << "Enter Your Name:";
            std::getline(std::cin >> std::ws, name);
            if (name.empty())
            {
                std::cout << "Name Cannot Be Empty" << std::endl;
            }
        } while (name.empty());
        do
        {
            std::cout << "Enter Hours woked: ";
            std::cin >> hours_worked;
            if (hours_worked < 0)
            {
                std::cout << "Hours worked cannot be negative" << std::endl;
            }
        } while (hours_worked < 0);

        PayCal(name, hours_worked, PAY_RATE);
    }
    return 0;
}

void PayCal(std::string name, double hours_worked, double PAY_RATE)
{
    double total_pay;
    if (hours_worked > 40)
    {
        double overtime = hours_worked - 40;
        total_pay = (40 * PAY_RATE) + (overtime * PAY_RATE * 1.5);
    }
    else
    {
        total_pay = hours_worked * PAY_RATE;
    }
    std::cout << "Employee:" << name << std::endl;
    std::cout << "Hours Worked:" << hours_worked << std::endl;
    std::cout << "Pay per hour $" << PAY_RATE << std::endl;
    std::cout << "Your Pay is $ " << total_pay << std::endl;
    std::cout << "*********************************";
}