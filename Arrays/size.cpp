#include<iostream>

int main(){
    //size of returns the size of a data type in bytes

    std::string studentName = "Manoj Mandapati";
    double gpa = 1.9;
    char grade = 'F';
    bool isStudent = false;
    std::cout<<sizeof(studentName)<<" bytes"<<std::endl;
    std::cout<<sizeof(gpa)<<" bytes"<<std::endl;
    std::cout<<sizeof(grade)<<" bytes"<<std::endl;
    std::cout<<sizeof(isStudent)<<" bytes"<<std::endl;
    // the bytes won't change until the datatypes is changed 
    //How to get how many elements in a Array here is an example ther general template is to divide the sizeof(array) by the sizeof(data type of string)

    std::string subjects[] = {"Supervised","Unsupervised","SQL"};
    std::cout<<sizeof(subjects)/sizeof(std::string)<<" elements"<<std::endl;
    return 0;
}