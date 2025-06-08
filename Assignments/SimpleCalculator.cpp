#include<iostream>
using namespace std;

int main(){

    cout<<"Simple Calculator"<<endl;

    int num1;
    cout<<"Enter the first number = ";
    cin>>num1;

    int num2;
    cout<<"Enter the first number = ";
    cin>>num2;

    char oper;
    cout<<"Select the Opertaor (+,-,*,/,%) = ";
    cin>>oper;

    switch(oper){

        case '+':
        cout<<"Addition = "<<num1+num2<<endl;
        break;

        case '-':
        cout<<"Subtract = "<<num1-num2<<endl;
        break;

        case '*':
        cout<<"Multiplication = "<<num1*num2<<endl;
        break;

        case '/':
        cout<<"Division = "<<num1/num2<<endl;
        break;

        case '%':
        cout<<"Remainder = "<<num1%num2<<endl;
        break;

        default:
        cout<<"Invalid"<<endl;
        break;


    }

    return 0;
}