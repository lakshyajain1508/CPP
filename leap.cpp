// Write a Program to Check Leap Year ?

#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year = ";
    cin>>year;
    if (year%4 == 0)
    {
        cout<<"This year is leap year";
    }
    else
    {
        cout<<"This year is not a leap year";
    }
    return 0;
}