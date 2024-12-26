#include<iostream>
using namespace std;
int main(){
    
    int row;
    cout<<"Enter the size of row : ";
    cin>>row;
    int col;
    cout<<"Enter the size of column : ";
    cin>>col;
    char data[col][row];
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cout<<"data "<<i<<j<<" = ";
            cin>>data[i][j];
        }
    }
    
    
    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<<data[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
