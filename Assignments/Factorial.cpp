#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int num = n;
    int factorial = 1;
    while(n>0){
        factorial *= n;
        n--;
    }
    cout<<"Factorial of "<<num<<" : "<<factorial<<endl;
}