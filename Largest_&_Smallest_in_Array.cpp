#include <iostream>

int main(){
    int size = 5;
    int array[size] = {5,7,3,8,8};
    int largest;
    int smallest;
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(array[i] > array[j]){
                largest = array[i];
            }
        }
    }
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(array[i] < array[j]){
                smallest = array[i];
            }
        }
    }
    
    std::cout << "Largest number: " << largest << std::endl;
    std::cout << "Smallest number: " << smallest << std::endl;

    return 0; 
}
// Time complexity = O(n^2 + m^2)