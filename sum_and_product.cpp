//program to calculate the sum and product of the elements in an array.
#include <iostream>

int main(){
    int array[] = {23,5,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);
    int sum  = 0;
    int product = 1;


    for(int i = 0; i<size ; i++){
        sum = sum + array[i];
        product = product * array[i];
    }

    std::cout << sum << std::endl;
    std::cout << product << std::endl;



    return 0;
}