#include <iostream>

int main()
{
    // there are to types of conversion implicit and explict where implict is automatic and explict is you need to mention the data type
    // int x = 3.14; // this is an implicit conversion because all the decimals are removed
    // double x = int(3.14); // this is an explicit we specifying the datatype
    // std::cout << char(114);

    int correct = 6;
    int question = 10;
    double score = double(correct)/double(question) *100;
    std::cout<<score <<"%";
    return 0;
}