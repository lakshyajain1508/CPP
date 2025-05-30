// Write a program to find Grade ?

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks to obtained a grade = ";
    cin>>marks;

    if(marks>=80)
    {
        cout<<"Grade A";
    }
    else if (marks>=60)
    {
        cout<<"Grade B";
    }
     else if (marks>=40)
    {
        cout<<"Grade C";
    }
     else if (marks>=30)
    {
        cout<<"Grade D";
    }
    else
    {
        cout<<"Grade F";
    }
    

    return 0;
}