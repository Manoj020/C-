#include<iostream>

int main(){
    double temp;
    char unit;

    std::cout<<"****** Temperature Conversion ******"<<std::endl;
    std::cout<<"F = Fahrenheit"<<std::endl;
    std::cout<<"C = Celsuis"<<std::endl;
    std::cout<<"What Unit You Would Like To Convert ";

    std::cin>>unit;

    if(unit== 'f' || unit == 'F' ){
        std::cout<<"Enter Temperature in Celsuis ";
        std::cin>>temp;
        temp = (1.8 * temp) + 32;
        std::cout<<"The Temperature in Fahrenheit is "<<temp<<"F"<<std::endl;
    }
    else if (unit == 'c' || unit == 'C'){
        std::cout<<"Enter Temperature in Fahrenheit ";
        std::cin>>temp;
        temp = (temp-32) / 1.8;
        std::cout<<"The Temperature in Celsuis is "<<temp<<"C"<<std::endl;
    }
    else{
        std::cout<<"Please choose a operation between C/F"<<std::endl;
    }
    std::cout<<"***********************************"<<std::endl;
    return 0;
}