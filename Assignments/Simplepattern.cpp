#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<" ";
        cout<<endl;
    }
}