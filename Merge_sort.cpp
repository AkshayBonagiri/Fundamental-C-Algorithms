#include <iostream>
#include <vector>

// Merges two sorted halves of the array
void merge(std::vector<int> &arr, int start, int mid, int end){
    std::vector<int> temp;
    int i = start;
    int j = mid + 1;

    // Compare and merge elements from both halves
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements from left half
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements from right half
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back to original array
    for(int idx = 0; idx < temp.size(); idx++){
        arr[start + idx] = temp[idx];
    }
}

// Recursively divides and sorts the array
void mergesort(std::vector<int> &arr, int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2;
        mergesort(arr, start, mid);     // Sort left half
        mergesort(arr, mid + 1, end);   // Sort right half
        merge(arr, start, mid, end);    // Merge both halves
    }
}

int main(){
    std::vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergesort(arr, 0, 5);  // Sort the array

    // Print the sorted array
    for(int val : arr){
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}
