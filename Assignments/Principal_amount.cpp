#include <iostream> 
#include <cmath> 
using namespace std; 
void calculateMaturityAmount(double principal, double rate, int time, bool isCompound) {double maturityAmount;

if (isCompound)
{
    maturityAmount = principal * pow((1 + rate / 100), time);
}
else
{
    maturityAmount = principal + (principal * rate * time) / 100;
}

cout << "Maturity Amount: $" << maturityAmount << "\n";
}

int main()
{
    double principal, rate;
    int time, choice;

    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time Period (years): ";
    cin >> time;

    cout << "Choose Interest Type:\n1. Simple Interest\n2. Compound Interest\nEnter choice: ";
    cin >> choice;

    calculateMaturityAmount(principal, rate, time, choice == 2);
    return 0;
