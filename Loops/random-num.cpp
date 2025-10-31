#include<iostream>
#include<ctime>

int main(){
    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    for (int i = 0; i <3; i++){
        int num = (rand() % 6) + 1;
        std::cout<<num<<std::endl;
    }
    return 0;
}