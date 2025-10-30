#include<iostream>

int main(){
    int rows;
    int col;
    char symobl;
    std::cout<<"How many rows? ";
    std::cin>>rows;
    std::cout<<"How many columns? ";
    std::cin>>col;
    std::cout<<"Select an symbol ";
    std::cin>>symobl;
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=col; j++){
            std::cout<<symobl;
        }
        std::cout<<std::endl;
    }
    return 0;
}