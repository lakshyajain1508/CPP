#include<iostream>
using namespace std;

    // Multiple Inheritance - Multiple inheritance involves a class deriving from more than one base class. This can lead to complex class hierarchies.

class Teacher{
    public:
        void teach(){
            cout << "I am Teacher." << endl;
        }
};

class Student{
    public:
        void student(){
            cout << "I am Student." << endl;
        }
};

class Staff : public Teacher , public Student{
    public:
        void staff(){
            cout << "I am Staff." << endl;
        }
};

int main(){
    Staff school;
    school.teach();
    school.student();
    school.staff();
    return 0;
}