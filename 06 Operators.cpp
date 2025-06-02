#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 5;

    cout << "Arithmetic Operations:" << endl;

    // Addition
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int difference = a - b;
    cout << "Difference: " << difference << endl;

    // Multiplication
    int product = a * b;
    cout << "Product: " << product << endl;

    // Division
    int quotient = a / b;
    cout << "Quotient: " << quotient << endl;

    // Modulus (remainder)
    int remainder = a % b;
    cout << "Remainder: " << remainder << endl;

    cout << "\nRelational Operations:" << endl;

     // Equal to
    cout << (a == b) << endl;

    // Not equal to
    cout << (a != b) << endl;

    // Greater than
    cout << (a > b) << endl;

    // Less than
    cout << (a < b) << endl;

    // Greater than or equal to
    cout << (a >= b) << endl;

    // Less than or equal to
    cout << (a <= b) << endl;

    cout << "\nLogical Operations:" << endl;

    bool x = true, y = false;

    // Logical AND
    cout << (x && y) << endl;

    // Logical OR
    cout << (x || y) << endl;

    // Logical NOT
    cout << !x << endl;
    cout << !y << endl;

    cout << "\nBitwise Operations:" << endl;

    int c = 5, d = 3;

    // Bitwise AND
    cout <<"Bitwise AND: "<< (c & d) << endl;

    // Bitwise OR
    cout <<"Bitwise OR: "<< (c | d) << endl;

    // Bitwise XOR
    cout <<"Bitwise XOR: "<< (c ^ d) << endl;

    // Bitwise NOT
    cout <<"Bitwise NOT: "<< (~d) << endl;

    // Left shift
    cout <<"Left shift: "<< (c << 1) << endl;

    // Right shift
    cout <<"Right shift: "<< (c >> 1) << endl;

    cout << "\nAssignment Operations:" << endl;
    int e = 20, f = 10;

    int g = e;
    cout << "g: " << g << endl;

    // Addition assignment
    e += f;
    cout << "e: " << e << endl;

    // Subtraction assignment
    e -= f;
    cout << "e: " << e << endl;

    // Multiplication assignment
    e *= f;
    cout << "e: " << e << endl;

    // Division assignment
    e /= f;
    cout << "e: " << e << endl;

    // Modulus assignment
    e %= f;
    cout << "e: " << e << endl;
    return 0;

}