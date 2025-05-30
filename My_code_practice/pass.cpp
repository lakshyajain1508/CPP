// enter the password
// Password Checker Example :

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string pass;
    cout << "Set your password : ";
    cin >> pass;
    string pass2;
    cout << "Enter your password : ";
    cin >> pass2;
    if (pass2 == pass)
    {
        int ans;
        cout << "1. Who invented Java Programming?\n";
        cout << "1. ) Guido van Rossum\n";
        cout << "2. ) James Gosling\n";
        cout << "3. ) Dennis Ritchie\n";
        cout << "4. ) Bjarne Stroustrup\n";
        cout << "Select answer : ";
        cin >> ans;

        if (ans == 2)
        {
            cout << "Next one :- \n";
            int ans;
            cout << "2. Which component is used to compile, debug and execute the java programs?\n";
            cout << "1. ) JRE\n";
            cout << "2. ) JIT\n";
            cout << "3. ) JDK\n";
            cout << "4. ) JVM\n";
            cout << "Select answer : ";
            cin >> ans;
            if (ans == 2)
            {
                cout << "Hurray!!";
            }
            else
            {
                cout << "Wrong,come next year";
            }
        }
        else
        {
            cout << "Try next year";
        }
    }
    else
    {
        string pass3;
        cout << "wrong password ... try 2 more time out of 2 - ";
        cin >> pass3;
        if (pass3 == pass)
        {
            int ans;
            cout << "1. Who invented Java Programming?\n";
            cout << "1. ) Guido van Rossum\n";
            cout << "2. ) James Gosling\n";
            cout << "3. ) Dennis Ritchie\n";
            cout << "4. ) Bjarne Stroustrup\n";
            cout << "Select answer : ";
            cin >> ans;

            if (ans == 2)
            {
                cout << "Next one :- \n";
                int ans;
                cout << "2. Which component is used to compile, debug and execute the java programs?\n";
                cout << "1. ) JRE\n";
                cout << "2. ) JIT\n";
                cout << "3. ) JDK\n";
                cout << "4. ) JVM\n";
                cout << "Select answer : ";
                cin >> ans;
                if (ans == 2)
                {
                    cout << "Hurray!!";
                }
                else
                {
                    cout << "Wrong,come next year";
                }
            }
            else
            {
                cout << "Try next year";
            }
        }
        else
        {
            string pass4;
            cout << "wrong password ... try 1 more time out of 1 - ";
            cin >> pass4;
            if (pass4 == pass)
            {
                int ans;
                cout << "1. Who invented Java Programming?\n";
                cout << "1. ) Guido van Rossum\n";
                cout << "2. ) James Gosling\n";
                cout << "3. ) Dennis Ritchie\n";
                cout << "4. ) Bjarne Stroustrup\n";
                cout << "Select answer : ";
                cin >> ans;

                if (ans == 2)
                {
                    cout << "Next one :- \n";
                    int ans;
                    cout << "2. Which component is used to compile, debug and execute the java programs?\n";
                    cout << "1. ) JRE\n";
                    cout << "2. ) JIT\n";
                    cout << "3. ) JDK\n";
                    cout << "4. ) JVM\n";
                    cout << "Select answer : ";
                    cin >> ans;
                    if (ans == 2)
                    {
                        cout << "Hurray!!";
                    }
                    else
                    {
                        cout << "Wrong,come next year";
                    }
                }
                else
                {
                    cout << "Try next year";
                }
            }
            else
            {
                cout << " wrong password ... try 0 more time 0";
            }
        }
    }
    return 0;
}
