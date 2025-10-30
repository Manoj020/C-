#include<iostream>

int main(){
  // int age;
  // std::cout<<"Enter Your Age: ";
  // std::cin>>age;
  // age>=18 ? std::cout<<"Welcome to the site":std::cout<<"You are not old enough to visit the site";
  int number;
  std::cout<<"Enter a number: ";
  std::cin>>number;
  number%2==0 ? std::cout<<"Even" : std::cout<<"Odd";
  return 0;
}

