#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int divi(int a,int b){
    return a/b;
}

int rem(int a,int b){
    return a*b;
}

int main(){

    int num1;
    cout<<"Enter the frist number = ";
    cin>>num1;
    int num2;
    cout<<"Enter the frist number = ";
    cin>>num2;

    int result = add(num1,num2);
    int result1 = sub(num1,num2);
    int result2 = mul(num1,num2);
    int result3 = divi(num1,num2);
    int result4 = rem(num1,num2);

    char oper;
    cout<<"Select the Opertaor (+,-,*,/,%) = ";
    cin>>oper;

    switch(oper){

        case '+':
        cout<<"Sum = "<<result;
        break;

        case '-':
       
        cout<<"Subtract = "<<result1;
        break;

        case '*':
        
        cout<<"Multipy = "<<result2;
        break;

        case '/':
        
        cout<<"Divide = "<<result3;
        break;
        
        case '%':
        
        cout<<"Remainder = "<<result4;
        break;
        
        default:
        cout<<"Error...";
        break;
        
    }

    

    return 0;
}