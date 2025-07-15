#include <iostream>

// lower bound: we have to find a number greater than or equal to target

int lower_bound(int arr[], int target, int size){
    int start = 0;
    int end = size - 1;
    int ans = size;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= target){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int target = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << lower_bound(arr, target, size) << std::endl;

    return 0;
}