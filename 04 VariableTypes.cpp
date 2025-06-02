#include<iostream>
using namespace std;

// types of variables in C++

int globalVar = 20; // Global variable declaration (default initialized to 0)

void staticFunction() {
    static int staticVar = 30; // Static variable declaration (initialized only once)
    cout << "Static Variable inside function: " << staticVar << endl;
    // Incrementing the static variable
}

int main(){

    // Local variable
    int localVar = 10; // This variable is declared inside the main function and can only be accessed within this function.
    cout << "Local Variable: " << localVar << endl;

    // 02 Global Variable
    // Global variable
    // This variable is declared outside any function and can be accessed from anywhere in the program.

    cout << "Global Variable: " << globalVar << endl;

    // 03 Static Variable
    // This variable retains its value between function calls.
    staticFunction(); // Call the function to demonstrate static variable behavior


    // 04 Constant Variable
    const float pi = 3.14; // Constant variable declaration (cannot be modified)
    cout << "Constant Variable (pi): " << pi << endl;
    
    // 05 Volatile Variable
    volatile int volatileVar = 100; // Volatile variable declaration (indicates that the value may change unexpectedly)
    cout << "Volatile Variable: " << volatileVar << endl;

    return 0;
}