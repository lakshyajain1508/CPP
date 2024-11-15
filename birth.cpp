// Find Age ?

#include<iostream>
using namespace std;
int main()
{
    int day,month,year;
    cout<<"Enter your birth year: ";
    cin>>year;
    cout<<"Enter your birth month: ";
    cin>>month;
    cout<<"Enter your birth day: ";
    cin>>day;
    int day1,month1,year1;
    cout<<"Enter your current year: ";
    cin>>year1;
    cout<<"Enter your current month: ";
    cin>>month1;
    cout<<"Enter your current day: ";
    cin>>day1;
    int mon = (year1-year)*12+(month1-month);
    if()
    cout<<year1-year<<" years "<<month1-month<<" months "<<day1-day<<" days\n";
    cout<<"or "<<mon<<" month "<<endl;
    return 0;

}