#include <iostream>

int Binary_Search(int arr[],int size,int target,int end,int start){
    if(start<=end){
        int mid = start + (end - start)/2;                          //for 1st half
        if(target > arr[mid]){
            return Binary_Search(arr,size,target,end,mid+1);
        }
        else if(target < arr[mid]){                                 //for 2nd half
            return Binary_Search(arr,size,target,mid-1,start);
        }
        else{
            return mid;                                              //mid will be the answer   
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6};                //Array
    int size = sizeof(arr)/sizeof(arr[0]);    //Calculating the Size of the Array
    int target = 1;                           //Target element is the element we want to search in the array
    int end = size - 1;                       //initializing the end to index size - 1
    int start = 0;                            //initializing the start to index 0
    
    
    std::cout << Binary_Search(arr,size,target,end,start) << std::endl;
    
    return 0;
}