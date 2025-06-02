// Write a Program to Check Whether an Alphabet is Vowel or Consonant ?

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the small alphabet = ";
    cin>>ch;
    if(ch== 'a' || ch =='e' || ch == 'o' || ch == 'i' || ch == 'u')
    {
        cout<<"The alphabet is vowel";
    }
    else
    {
        cout<<"The alphabet is consonant";
    }
    return 0;
}