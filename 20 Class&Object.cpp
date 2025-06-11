// Simple Code for explaining Class & Objects.
#include <iostream>
using namespace std;
// Class definition
class Car {
public:
    // Properties
    string brand;
    int year;

    // Method
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year <<endl;
    }
};

int main() {
    // Object creation
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2022;

    // Calling method
    myCar.displayInfo();
}