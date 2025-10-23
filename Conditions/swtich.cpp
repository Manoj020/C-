#include<iostream>

int main(){
  // this can be used when there are multiple else if statements and default works like a else condition 
  int day_of_week;
  std::cout<<"Enter the day of the week: ";
  std::cin>>day_of_week;
  switch(day_of_week){
    case 1:
    std::cout<<"It is Monday";
    break;
    case 2:
    std::cout<<"It is Tuesday";
    break;
    case 3:
    std::cout<<"It is Wednesday";
    break;
    case 4:
    std::cout<<"It is Thursday";
    break;
    case 5:
    std::cout<<"It is Friday";
    break;
    case 6:
    std::cout<<"It is Saturday";
    break;
    case 7:
    std::cout<<"It is Sunday";
    break;
    default:
    std::cout<<"Please Enter a number between (1-7)";
  }
  return 0;
}
