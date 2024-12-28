#include<iostream>
using namespace std;

class MarkSheet{

    public : int marks(int java, int python, int cpp, int html, int css){
        cout<<"-------------------------------"<<endl;
        cout<<"Java Marks = "<<java<<endl;
        cout<<"Python Marks = "<<python<<endl;
        cout<<"C++ Marks = "<<cpp<<endl;
        cout<<"HTML Marks = "<<html<<endl;
        cout<<"CSS Marks = "<<css<<endl;
    }
    
    public : int total(int java, int python, int cpp, int html, int css){
        
        int total = java+python+cpp+css+html;
        return total;
    }
    
    public : float percent(int java, int python, int cpp, int html, int css){
        
        float totals = java+python+cpp+css+html;
        float percentage = (totals/500)*100;
        return percentage;
    }
   
};

int main(){
    int java,python,cpp,html,css;
    cout<<"Enter Java Marks = ";
    cin>>java;
    cout<<"Enter Python Marks = ";
    cin>>python;
    cout<<"Enter C++ Marks = ";
    cin>>cpp;
    cout<<"Enter HTML Marks = ";
    cin>>html;
    cout<<"Enter CSS Marks = ";
    cin>>css;
    MarkSheet m;
    m.marks(java,python,cpp,html,css);
    cout<<"Total Marks = "<<m.total(java,python,cpp,html,css)<<endl;
    cout<<"Total Percentage = "<<m.percent(java,python,cpp,html,css)<<"%";
    return 0;
}
