#include <iostream>
#include <cmath>
#include <time.h>


using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is an even number.";


    } else {
        cout << number << " is an odd number.";

    }
    
    system("pause");
    
    return 0;
}