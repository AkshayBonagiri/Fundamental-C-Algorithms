📘 C++ Array Operations: Search & Sort
✅ Description
This project contains two fundamental programs in C++:

Linear Search – Finding an element in an array.

Bubble Sort – Sorting an array in ascending order.

📌 Things I Learned
1️⃣ Arrays in C++
Declaring and initializing arrays.

Calculating the size of arrays using:

cpp
Copy
Edit
int size = sizeof(array) / sizeof(array[0]);
2️⃣ Linear Search
Finding an element in an array one-by-one.

Returning the index of the element if found.

Returning -1 if the element is not found.

3️⃣ Bubble Sort
Comparing adjacent elements and swapping if they are in the wrong order.

Nested loops for multiple passes through the array.

4️⃣ Swapping Elements
cpp
Copy
Edit
int temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;
5️⃣ for-each Loop
Useful for printing arrays cleanly:

cpp
Copy
Edit
for (int element : array)
    std::cout << element;
6️⃣ Functions
Creating and using functions to make code reusable and organized.
