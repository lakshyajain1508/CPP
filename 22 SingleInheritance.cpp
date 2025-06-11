#include <iostream>
using namespace std;

// Single Inheritance - In single inheritance, a class is derived from only one base class. This is the simplest form of inheritance.

class Client{  // Parent/Base class
    public:
    void clientFunction(){
        cout << "Client Function" << endl;
    }
};

class Product : public Client{ // Child/Derived class
    public:
    void productFunction(){
        cout << "Product Function" << endl;
    }
};

int main()
{
    Product p; // object
    p.clientFunction(); 
    p.productFunction();
    return 0;
}