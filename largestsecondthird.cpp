#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array: ";
    cin>>size;
    
    int i;
    int arr[size];
    for(i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element = ";
        cin>>arr[i];
    }
    int largest=-1;
    int secondlargest=-1;
    int thirdlargest=-1;
    
    for(int i=0;i<size;i++)
        if(arr[i]>largest){
            thirdlargest=secondlargest;
            secondlargest=largest;
            largest=arr[i];
        }
        for(int i=0;i<size;i++)
        if(arr[i]>secondlargest && arr[i]!=largest){
            thirdlargest=secondlargest;
            secondlargest=arr[i];
        }
        for(int i=0;i<size;i++)
        if(arr[i]>thirdlargest && arr[i]!=largest && arr[i]!=secondlargest){
            thirdlargest=arr[i];
        }
    
    if(largest!=-1){
        cout<<"largest element: "<<largest<<endl;
    }
    if(secondlargest!=-1){
        cout<<"second largest element: "<<secondlargest<<endl;
    }
    if(thirdlargest!=-1){
        cout<<"third largest element: "<<thirdlargest<<endl;
    }
    return 0;
}
