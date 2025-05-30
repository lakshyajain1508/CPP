#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array = ";
    cin>>size;
    
    int data[size];
    
    for(int i = 0; i < size; i++){
        cout<<"Enter the Elements "<<(i+1)<<" = ";
        cin>>data[i];
    }
    
    int minvalue = data[0];
    for(int i = 0; i < size; ++i){
    if(data[i]<minvalue){
        minvalue = data[i];
    }
    }
    cout<<"The smallest number is "<<minvalue;
    return 0;
    
}
