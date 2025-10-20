#include<iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    int x = 1;
    // int x = 2; //You cannot declare it again it causes a naming conflict for the program so we can use name spaces a name space is can be declared outside
    std::cout << "The x value is "<<x<<std::endl;
    //In order to print from the name space we use :: (which is the scope of the variable)
    std::cout <<"The x value in first namespace is "<<first::x<<std::endl;
    std::cout<<"The x value in the second name space is "<<second::x<<std::endl;
    return 0;

}