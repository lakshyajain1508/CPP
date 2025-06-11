#include<iostream>
using namespace std;

    // Multiple Inheritance - In multilevel inheritance, a class is derived from another derived class. This creates a chain of inheritance.
class Grandfather{ // Grandparent class members
    public:
        void grand(){
            cout << "I am Grandfather." << endl;
        }
};

class Father : public Grandfather{  // Parent class members
    public:
        void father(){
            cout << "I am Father." << endl;
        }
};

class Son : public Father{ // Child class members
    public:
        void son(){
            cout << "I am Son." << endl;
        }
};

int main(){
    Son fam;
    fam.grand();
    fam.father();
    fam.son();
    
    return 0;
}