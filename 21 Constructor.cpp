#include<iostream>
using namespace std;

// Constructors are special methods that are automatically called whenever an object of a class is created. 
// The constructor in C++ has the same name as the class or structure.
// create class constructor with argument
class student{
    
    // print student name with constructor argument
    public:student(string name){  
        cout << "Student name is " << name << endl;
    }
};

int main()
{
    student s1("Rugwed");
    student s2("Avaneet");

    return 0;
}