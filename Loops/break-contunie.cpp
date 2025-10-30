#include<iostream>

int main(){
    //break is used to break from the loop
    // continue is used to skip the current iteration
    for(int i=0; i<=20; i++){
        // if(i==5){
        //     continue;
        // }
        if(i==5){
            break;
        }
        std::cout<<i<<std::endl;
    }
    return 0;
}