#include<iostream>

int main(){
    //the order of the if statements matters
    // else is the catch all statement
    // we can use many else if statements to check a condition
    int age;
    std::cout<<"Enter Your Age: ";
    std::cin>>age;

    if(age>100){
        std::cout<<"You are too old too enter the site!";
    }
    else if (age>=18){
        std::cout<<"Welcome to the site!";
    }
    else if (age<=0){
        std::cout<<"You are not born yet!";
    }
    else{
        std::cout<<"You are not old enough to visit the site!";
    }
    return 0;
}