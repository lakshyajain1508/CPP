#include<iostream>
using namespace std;
int main(){
    
    int row;
    cout<<"Enter the size of row : ";
    cin>>row;
    int col;
    cout<<"Enter the size of column : ";
    cin>>col;
    int data1[col][row];
    
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cout<<"data "<<i<<j<<" = ";
            cin>>data1[i][j];
        }
    }
    
    cout<<"Matrix A = "<<endl;
    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<<data1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int rowa;
    cout<<"Enter the size of row : ";
    cin>>rowa;
    int cola;
    cout<<"Enter the size of column : ";
    cin>>cola;
    int data2[cola][rowa];
    for(int i = 0; i < rowa;i++){
        for(int j = 0; j < cola;j++){
            cout<<"data "<<i<<j<<" = ";
            cin>>data2[i][j];
        }
    }
    
    cout<<"Matrix B = "<<endl;
    for(int i = 0; i<cola; i++){
        for(int j = 0; j<rowa; j++){
            cout<<data2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sum = 0;
    cout<<"Sum of two matrix = "<<endl;
    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++){
           sum = data1[i][j]+data2[i][j];
           cout<<" "<<sum;
        }
        cout<<endl;
    }
   
    return 0;
}
