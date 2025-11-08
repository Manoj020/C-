#include <iostream>

// int main()
// {
//     std::string subjects[] = {"Supervised", "Unsupervised", "SQL"};
//     for (int i = 0; i < sizeof(subjects) / sizeof(std::string); i++)
//     {
//         std::cout << subjects[i] << std::endl;
//     }
//     return 0;
// }

// There is a better way of doing which for each but which is not flexible it starts and the beginning and ends in the end

int main(){
    std::string subjects[] = {"Maths","Physics","Chemistry"};
    int worths[] = {85,70,60};
    for(std::string subject : subjects){
        std::cout<<subject<<std::endl;
    }
    for(int worth : worths){
        std::cout<<worth<<std::endl;
    }
    return 0;
}
