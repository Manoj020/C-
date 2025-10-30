//There are 3 three logical operators they are 
//&& both conditions to be true
// || one condition should be true
// where as ! change the conditon to true to false or false true


#include<iostream>

int main(){
    int temp;
    bool rainy = true;
    std::cout<<"Enter the temperature: ";
    std::cin>>temp;
    if(temp<0 || temp>36){
        std::cout<<"It is Bad"<<std::endl;
    }
    else{
        std::cout<<"It is Good"<<std::endl;
    }
    if(!rainy){
        std::cout<<"It is raining"<<std::endl;
    }
    else{
        std::cout<<"It is not raining"<<std::endl;
    }
    return 0;
}