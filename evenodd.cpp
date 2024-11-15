// Write a Program to Check Whether a Number is Even or Odd.?
// Enter Number to Find Even or odd = 3 
// -- Your Number 3 is Odd 

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number = ";
    cin>>a;
    if(a%2==0)
    {
        cout<<"Your number "<<a<<" is even";
    }
    else
    {
        cout<<"Your number "<<a<<" is odd";
    }
    
    return 0;
}