#include<iostream>
using namespace std;

// data types in C++

int main() {

    // 01 Basic Data Types
    int integerVar = 42; // Integer type
    float floatVar = 3.14f; // Float type
    double doubleVar = 2.718281828459045; // Double type
    char charVar = 'A'; // Character type
    bool boolVar = true; // Boolean type

    cout << "Integer: " << integerVar << endl;
    cout << "Float: " << floatVar << endl;
    cout << "Double: " << doubleVar << endl;
    cout << "Character: " << charVar << endl;
    cout << "Boolean: " << boolVar << endl;

    // 02 Derived Data Types
    int arr[5] = {1, 2, 3, 4, 5}; // Array type
    cout << "Array Element: " << arr[2] << endl;

    int* ptr = &integerVar; // Pointer type
    cout << "Pointer to Integer: " << *ptr << endl;

    string str = "Hello, World!"; // String type
    cout << "String: " << str << endl;

    // 03 User-Defined Data Types

    struct Point {
        int x;
        int y;
    };
    
    Point p1 = {10, 20}; // Structure type
    cout << "Point: (" << p1.x << ", " << p1.y << ")" << endl;

    union Data {
        int intData;
        float floatData;
        char charData;
    };
    
    Data data; 
    data.intData = 100; // Union type
    cout << "Union Integer Data: " << data.intData << endl;

    enum Color { RED, GREEN, BLUE };
    Color myColor = GREEN; 
    cout << "Enum Color Value: " << myColor << endl;

    return 0;
}