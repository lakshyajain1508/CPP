#include<iostream>
using namespace std;
int main(){

    cout<<"Enter your name - ";
    string name;
    cin>>name;

    cout<<"Enter your Roll No. - ";
    string roll;
    cin>>roll; 

    cout<<"Enter Java marks = ";
    int java;
    cin>>java;   

    cout<<"Enter cpp marks = ";
    int cpp;
    cin>>cpp; 

    cout<<"Enter HTML marks = ";
    int html;
    cin>>html;   

    cout<<"Enter Python marks = ";
    int python;
    cin>>python; 

    cout<<"Enter SQL marks = ";
    int sql;
    cin>>sql; 

    int total = java+cpp+html+python+sql;

    float perc = (total*100)/500; 

    cout<<"Name : "<<name<<endl; 
    cout<<"Roll No. : "<<roll<<endl; 
    cout<<"Java = "<<java<<endl;
    cout<<"CPP = "<<cpp<<endl;
    cout<<"HTML = "<<html<<endl;
    cout<<"Python = "<<python<<endl;
    cout<<"SQL = "<<sql<<endl;
    cout<<"Total Marks = "<<total<<endl;
    cout<<"Total Percentage = "<<perc<<endl;
    
    return 0;
}
