#include <iostream>


int BinarySearch(int arr[] , int target ,int size){
    int start = 0;             //initalizing to index 0 as start
    int end = size - 1;        //initalizing end
    int mid;                   //declaring the mid variable = index of the middle variable


    while(start<=end){


        mid = start + (end - start)/2;   //Mid calculating formula **optimized for INT_MAX + INT_MAX** situation to prevent overflowing


        if(target > arr[mid]){          //2nd half
            start = mid + 1;
        }
        else if(target < arr[mid]){     //1st half
            end = mid - 1;

        }
        else{
            return mid;                 //return will be that answer
        }
    }

    return -1; //not found
}
int main(){
    int arr[] = {2,4,5,7,8,19,22};              //Array
    int target = 5;                             //declaring the element we want to find
    int size = sizeof(arr)/sizeof(arr[0]);      //number of elements in the array

    std::cout << BinarySearch(arr,target,size);

    return 0;
}