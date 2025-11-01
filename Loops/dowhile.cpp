#include<iostream>
int main(){
    //do while loop exceute the condition once and check the condition again until it is true
    int number;
    do{
        std::cout<<"Enter a number: ";
        std::cin>>number;
        std::cout<<number<<std::endl; // do this first after until the condition is met
    }while(number<0);
    return 0;
}