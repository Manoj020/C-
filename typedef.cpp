#include<iostream>
#include<vector>
//typedef is used for redability in order to better name the variables it is mostly replaced by the using keyword now a days here are some examples
// typedef std::vector<std::pair<std::string,int>> pairlist_t;
//instead of typing std::vector<std::pair<std::string,int>> we can just type the pairlist_t this is the naming convention _t
// typedef std::string string_t;
// typedef int numbers_t;
using string_t = std::string;
using numbers_t = int;
//using works with what do you want to use and assign it maybe not sure
int main(){
    string_t firstName = "Manoj";
    numbers_t age = 25;
    std::cout<<"Your First Name is "<<firstName<<std::endl;
    std::cout<<"You are "<<age<<" years old";
    return 0;
}