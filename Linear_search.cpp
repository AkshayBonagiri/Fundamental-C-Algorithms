#include <iostream>

// Function to search for 'mynum' in 'my_array'
int search_array(int my_array[], int size, int mynum);

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array) / sizeof(array[0]); // Calculate array size
    int mynum = 5;                               // Element to search
    int index = search_array(array, size, mynum);// Call search function

    std::cout << index; // Output index or -1 if not found
    return 0;
}

// Linear search implementation
int search_array(int my_array[], int size, int mynum) {
    for (int i = 0; i < size; i++) {
        if (mynum == my_array[i]) return i; // Return index if found
    }
    return -1; // Return -1 if not found
}
//time complexity = O(n)
