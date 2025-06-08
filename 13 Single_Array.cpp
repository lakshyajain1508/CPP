#include <iostream>
using namespace std;


int main()
{

    int data[7] = {11, 22, 33, 44, 55, 66, 77};
    for (int i = 0; i < 7; i++){
            cout<<"Data "<< i+1<<" = " << data[i] << endl;
    }

    return 0;
}