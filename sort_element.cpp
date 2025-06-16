#include <iostream>

int main() {
    int array[] = {2, 5, 7, 4, 6};
    int size = sizeof(array) / sizeof(array[0]); // Calculate array size

    // Bubble Sort Algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap if elements are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    for (int c = 0; c < size; c++) {
        std::cout << array[c] << " ";
    }

    return 0;
}
