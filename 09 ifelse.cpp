#include<iostream>
using namespace std;

int main(){

    cout<<"Number Checker(Zero,Positive,Negative)";
    int num;
    cout<<"Enter the Number = ";
    cin>>num;

    if(num>0){
        cout<<num<<" is positive.";
    }
    else if (num==0)
    {
        cout<<"It is zero.";
    }
    else{
        cout<<num<<" is negative.";
    }
    
    return 0;
}