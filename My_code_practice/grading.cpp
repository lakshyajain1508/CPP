// Student Report Card System

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your name: ";
    cin>>s;
    int a;
    cout<<"Enter the roll no. : ";
    cin>>a;
    int java,c,cpp,ruby,python,sql;
    cout<<"Enter the JAVA marks : ";
    cin>>java;
    cout<<"Enter the C marks : ";
    cin>>c;
    cout<<"Enter the C++ marks : ";
    cin>>cpp;
    cout<<"Enter the RUBY marks : ";
    cin>>ruby;
    cout<<"Enter the PYTHON marks : ";
    cin>>python;
    cout<<"Enter the SQL marks : ";
    cin>>sql;
    cout<<"\n";
    cout<<"\n";
    cout<<"NAME = "<<s<<endl;
    cout<<"ROLL NO. = "<<a<<endl;
    if(java>35)
    {
        cout<<"JAVA = "<<java<<"/100"<<" P\n";
    }
    else
    {
        cout<<"JAVA = "<<java<<"/100"<<" F\n";
    }
    if(c>35)
    {
        cout<<"C = "<<c<<"/100"<<" P\n";
    }
    else
    {
        cout<<"JAVA = "<<c<<"/100"<<" F\n";
    }
    if(cpp>35)
    {
        cout<<"C++ = "<<cpp<<"/100"<<" P\n";
    }
    else
    {
        cout<<"C++ = "<<cpp<<"/100"<<" F\n";
    }
    if(ruby>35)
    {
        cout<<"RUBY = "<<ruby<<"/100"<<" P\n";
    }
    else
    {
        cout<<"RUBY = "<<ruby<<"/100"<<" F\n";
    }
    if(python>35)
    {
        cout<<"PYTHON = "<<python<<"/100"<<" P\n";
    }
    else
    {
        cout<<"PYTHON = "<<java<<"/100"<<" F\n";
    }
    if(sql>35)
    {
        cout<<"SQL = "<<sql<<"/100"<<" P\n";
    }
    else
    {
        cout<<"SQL = "<<sql<<"/100"<<" F\n";
    }
    cout<<"\n";
    cout<<"\n";
    int total = java+c+cpp+ruby+python+sql;
    int perc = (total*100/600);
    cout<<"Total = "<<total<<"/600\n";
    if(perc>35 && java>35 && c>35 && cpp>35 && ruby>35 && python>35 && sql>35)
    {
        cout<<"Total percentage = "<<perc<<"% pass\n";
    }
    else
    {
        cout<<"Total percentage = "<<perc<<"% fail\n";
    }
    
    
    
    return 0;

}