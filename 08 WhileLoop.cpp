#include<iostream>
using namespace std;

// while loop in C++

int main(){
    int i = 1;
    while(i<=10){
        cout << "Iteration: " << i << endl; // Print the current iteration number
        i++; // Increment the counter
    }

    // Simple example

    cout<<"\nMultiplication Table of 3"<<endl;
    int b = 3;
    int j = 1;
    while(j <= 10){
        cout << b << " x " << j << " = " << b*j <<endl;
        j++; // Increment the counter
    }

    return 0;
}
