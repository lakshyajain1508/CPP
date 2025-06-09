#include<iostream>
using namespace std;

int main(){

    cout<<"Accessing All Elements"<<endl;
    string greet = "Lakshya";
    char first = greet[0];
    char last = greet[(greet.length()-1)];

    cout<<"Accessing First Element - "<<first<<endl;
    cout<<"Accessing Last Element - "<<last<<endl;

    for(int i=0; i < greet.length();i++){
        cout<<"Element "<<i+1<<" = "<<greet[i]<<endl;
    }

    return 0;
}