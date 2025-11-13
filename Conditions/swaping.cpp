#include<iostream>

int main(){
    int a = 3;
    int b = 4;
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    return 0;
}