// Introduction to C++ Pointers - In C++, a pointer is a variable that holds the memory address of another variable. Understanding pointers is essential for tasks like dynamic memory allocation and efficient manipulation of data structures.
#include<iostream>
using namespace std;

// Function that swaps the values of two variables using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){

    // Simple code
    int num = 42;
    int *ptr; // Declaration
    ptr = &num; // Initialization

    cout<<"Value of number - "<<num<<endl;
    cout<<"Address of number - "<<ptr<<endl;


    // 1) Pointers and Arrays - Pointers and arrays are closely related in C++. An array name can be treated as a pointer to the first element of the array.

    int numbers[] = {1, 2, 3, 4, 5};
    int *point = numbers; // Points to the first element

    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << &numbers[i]<<endl;
    }


    // 2) Dynamic memory allocation with pointers - Dynamic memory allocation allows you to allocate memory at runtime using operators new and delete.
    int* dynamicNumber = new int; // Allocate memory for an integer

    *dynamicNumber = 123; // Assign a value to the dynamically allocated memory

    cout << "Value stored in dynamicNumber: " << *dynamicNumber <<endl;

    // Deallocate the dynamically allocated memory
    delete dynamicNumber;


    // 3) Pointers and Functions - Pointers can be used to pass variables by reference to functions, enabling the modification of the original values.

    int x = 5, y = 10;

    cout << "Before swap - x: " << x << ", y: " << y <<endl;

    // Pass the addresses of x and y to the swap function
    swap(&x, &y);

    cout << "After swap - x: " << x << ", y: " << y <<endl;

    return 0;
}

