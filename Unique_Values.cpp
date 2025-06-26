#include <iostream> // Required for input-output operations

int main() {
    // Declare and initialize an integer array
    int array[] = {1, 1, 2, 2, 3};
    
    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    int count; // Variable to store how many times an element appears in the array

    // Outer loop: Traverse each element of the array
    for (int i = 0; i < size; i++) {
        count = 0; // Reset count for each element

        // Inner loop: Compare the current element with every other element
        for (int j = 0; j < size; j++) {
            if (array[i] == array[j]) {
                count++; // Increment count if a match is found
            }
        }

        // If the count is 1, it means the element is unique in the array
        if (count == 1) {
            std::cout << "Unique value: " << array[i] << std::endl;
        }
    }

    return 0; // End of program
}
