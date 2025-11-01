#include<iostream>
void Bank(std::string name,int balance);

int main(){
    std::string name = "Manoj";
    int balance = 25;
    balance+=5;
    Bank(name,balance);//this are called arguments
    return 0;
}
void Bank(std::string name,int balance){ //this are called parameters
    std::cout<<"Welcome "<<name<<std::endl;
    std::cout<<"You have $ "<<balance;
}