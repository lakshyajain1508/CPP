//Object-Oriented Programming is a programming paradigm that revolves around the concept of "objects," which encapsulate data and behavior.

#include <iostream>
using namespace std;

class Employee
{

    string name = "Laksh";
    int id = 124203;
    double salary = 100000;

    public:
        void getdata(){
        cout << " Your name is : " << name << endl;
        cout << " Your id is : " << id << endl;
        cout << " Your salary is : " << salary << endl;
    }
};

int main()
{
    // creting object of Employee class
    // className objectName;
    Employee e1;
    // calling the getdata function
    // objectName.functionName();
    e1.getdata();

    return 0;
}