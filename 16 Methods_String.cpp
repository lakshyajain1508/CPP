#include <iostream>
#include <string>
using namespace std;

int main() {
    // String Concatenation- Concatenating strings involves combining them to create a new string. This can be achieved using the + operator or the append method.
    string firstName = "Lakshya";
    string lastName = "Jain";

    string fullName = firstName + " " + lastName;
    cout<<"Full Name: "<<fullName<<endl;

    string greeting = "Hello, ";
    cout<<greeting.append(firstName)<<endl;
    greeting.append(" ");
    cout<<greeting.append(lastName)<<endl;

    // String Length- Determining the length of a string is a common operation. The length and size methods provide the length of the string.

    string text = "lakshya";
    cout<<"String length = "<<text.length()<<endl; //length
    cout<<"String Size = "<<text.size()<<endl; // size

    // Accessing Individual Characters- Individual characters within a string can be accessed using the subscript ([]) operator.

    string greet = "Lakshya";
    char first = greet[0];
    char last = greet[(greet.length()-1)];

    cout<<"Accessing First Element - "<<first<<endl;
    cout<<"Accessing Last Element - "<<last<<endl;

    for(int i=0; i < greet.length();i++){
        cout<<"Element "<<i+1<<" = "<<greet[i]<<endl;
    }

    // Substring Extraction- Extracting substrings involves obtaining a portion of a string. The substr method is used for this purpose.

    string sentence = "C++ programming is fun";
    string substring = sentence.substr(4, 11); // "programming"
    cout<<"Substring - "<<substring<<endl;

    // String Comparison- Comparing strings is essential for various tasks. The compare method or relational operators (==, !=, <, >, <=, >=) can be used for string comparison.

    string str1 = "Lakshya";
    string str2 = "Laksh";

    if (str1 == str2) {
        cout << "Strings are equal." << std::endl;
    } else {
        cout << "Strings are not equal." << std::endl;
    }

    // Searching in Strings- Searching for substrings or characters within a string can be accomplished using methods like find.

    string sen = "C++ programming is enjoyable";
    size_t found = sen.find("programming");
    cout<<found<<endl;

    // String Modification- Modifying strings involves operations like replacing characters or portions of a string.
    string sent= "C++ fun is exciting";
    cout<<"Modify - "<<sent.replace(4,4, "programming ")<<endl;

    // Converting Strings to Numbers- Converting strings to numerical values is a common task, and C++ provides various methods to achieve this.

    string numStr = "123";
    int num = stoi(numStr);
    cout<<num<<endl;

    return 0;
}
