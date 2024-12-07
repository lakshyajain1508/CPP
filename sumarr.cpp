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
    
    for(int i = 0; i < size; i++){
        cout<<(i+1)<<" = "<<data[i]<<endl;    
    }
    int sum = 0;
    for(int i = 0; i<size;i++){
        sum = sum + data[i];
        
    }
    cout<<"sum = "<<sum<<endl;
}
