// Date and Time - C++ provides facilities for handling date and time through the <chrono> library and other functionalities. Managing temporal data is crucial for applications ranging from scheduling to logging.

#include<iostream>
#include<chrono> // The <chrono> library introduces a flexible and type-safe way to represent durations and time points.
using namespace std;

int main(){

    // Current Date and Time - Obtaining the current date and time is a fundamental operation. C++ provides std::chrono::system_clock for this purpose.

    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    cout << "Current time: " << ctime(&currentTime) <<endl;

    return 0;
}