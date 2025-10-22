#include<iostream>

int main(){
    // how c in is used to get user input we getline function 
    // cout << (insertion operator)
    // cin >> (extraction operator)
    std::string name; // variable name
    int age;
    std::cout<<"Enter your Name:";
    std::getline(std::cin>>std::ws, name);// why ws (white space in the input buffer when we move lines from one place to another)
    std::cout<<"Enter your age:";
    std::cin>>age;
    std::cout << "Hello "<<name<<std::endl;
    std::cout<<"You are "<<age <<" Years old";
    return 0;
}