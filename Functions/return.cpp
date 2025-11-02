#include <iostream>

// double Square(double length);
// double Cube(double length);
// int main()
// {
//     double length = 6.0;
//     double area = Square(length);
//     double volume = Cube(length);
//     std::cout << "Area: " << area<<std::endl;
//     std::cout<<"Volume: "<<volume;
//     return 0;
// }
// double Square(double length)
// {
//     return length * length;
// }

// double Cube(double length){
//     return length*length*length;
// }
std::string StringConcat(std::string first_name,std::string last_name);
int main(){
    std::string first_name = "Manoj";
    std::string last_name = "Mandpati";
    std::string full_name = StringConcat(first_name,last_name);
    std::cout<<"Hello "<<full_name;
    return 0;
}
std::string StringConcat(std::string first_name,std::string last_name){
    return first_name + " " + last_name;
}