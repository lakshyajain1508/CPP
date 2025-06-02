#include<iostream>
using namespace std;

// For Loop in C++

int main(){

    int a = 10;
    for (int i = 0; i < a; i++) {
        cout << "Iteration: " << i << endl; // Print the current iteration number
    }
    // Simple example 
    cout<<"\nMultiplication Table of 2"<<endl;
    int b = 2;
    for(int j = 0; j <=10; j++){
        cout << b << " x " << j << " = " << b*j <<endl;
    }
    return 0; 

}