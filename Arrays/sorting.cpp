#include<iostream>
void BubbleSort(int array[],int size);
int main(){
    // this is a example in bubble sort what the hell is bubble sort you moron;
    int array[] = {1,9,3,2,4,6,5,7,10,8};
    int size = sizeof(array)/sizeof(array[0]);
    std::cout<<"The size is "<<size<<std::endl;
    BubbleSort(array,size);
    for(int element : array){
        std::cout<<element<<" ";
    }
    return 0;
}

void BubbleSort(int array[],int size){
    int temp;
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-i-1;j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
