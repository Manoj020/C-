#include <iostream>
#include <iomanip>
#include <limits>
void showBalance(double balance);
double deposit();
double withDraw(double balance);
int main()
{
  double balance = 180;
  int option = 0;
  do
  {
    std::cout << "***********************" << std::endl;
    std::cout << "Your Options: " << std::endl;
    std::cout << "***********************" << std::endl;
    std::cout << "1. Show Balance" << std::endl;
    std::cout << "2. Depoist Money" << std::endl;
    std::cout << "3. Withdarw Money" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter Your Option:";
    std::cin >> option;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (option)
    {
    case 1:
      showBalance(balance);
      break;
    case 2:
      balance += deposit();
      showBalance(balance);
      break;
    case 3:
      balance -= withDraw(balance);
      showBalance(balance);
      break;
    case 4:
      std::cout << "Thanks for visiting" << std::endl;
      break;
    default:
      std::cout << "That was a Invalid choice" << std::endl;
      break;
    }

  } while (option != 4);
  return 0;
}

void showBalance(double balance)
{
  std::cout << "Your Balance is $:" << std::setprecision(2) << std::fixed << balance << std::endl;
}
double deposit()
{
  double amount = 0;
  std::cout << "How much you want to deposit?";
  std::cin >> amount;
  if (amount < 0)
  {
    std::cout << "That was an invalid amount try again" << std::endl;
    return 0;
  }
  else
  {
    return amount;
  }
}
double withDraw(double balance)
{
  double amount = 0;
  std::cout << "Enter the amount to withdraw?";
  std::cin >> amount;
  if (amount > balance)
  {
    std::cout << "Insufficent Funds" << std::endl;
    return 0;
  }
  else if (amount < 0)
  {
    std::cout << "That was a invalid amount try again" << std::endl;
    return 0;
  }
  else
  {
    return amount;
  }
}
