#include<iostream>
using namespace std;
 int main(){
     int a,b,c,d;
     
     a = 150;
     b = 100;
     c = 90;
     d = 180;
     
     if(a>b && a>c && a>d){
         cout<<"a is greater";
     }
     else if (b>a && b>c && b>d)
    {
        cout<<"b is greater";
    }
    else if(c>a && c>b && c>d){
        cout<<"c is greater";
    }
    else{
        cout<<"d is greater";
    }
    return 0;
 }
