#include<iostream>
using namespace std;

    // Multiple Inheritance - Multiple inheritance involves a class deriving from more than one base class. This can lead to complex class hierarchies.

class Grandfather{
    public:
        void grand(){
            cout << "I am Grandfather." << endl;
        }
};

class Father{
    public:
        void father(){
            cout << "I am Father." << endl;
        }
};

class Son : public Grandfather , public Father{
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