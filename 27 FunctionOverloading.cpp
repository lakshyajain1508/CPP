// Function Overloading - In C++, function overloading allows you to define multiple functions with the same name but different parameter lists. This includes having different types or a different number of parameters.

#include<iostream>
using namespace std;

class Overloader{

    public:

    void display(int num){
        cout<<"Integer : "<<num<<endl;
    }

    void display(double num){
        cout<<"Double : "<<num<<endl;
    }

    void display(string num){
        cout<<"String : "<<num<<endl;
    }
};

int main(){

    Overloader obj;
    obj.display(5);
    obj.display(3.14);
    obj.display("Lakshya");
    
    return 0;
}