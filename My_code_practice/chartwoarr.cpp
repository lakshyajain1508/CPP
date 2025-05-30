#include<iostream>
using namespace std;
int main(){
    
    char data[3][3];
    data[0][0] = 'A';
    data[1][0] = 'B';
    data[2][0] = 'C';
    data[0][1] = 'D';
    data[1][1] = 'E';
    data[2][1] = 'F';
    data[0][2] = 'G';
    data[1][2] = 'H';
    data[2][2] = 'I';
    
    for(int i = 0; i<3; ++i){
        for(int j = 0; j<3; j++){
            cout<<data[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
