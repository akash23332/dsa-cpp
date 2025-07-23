#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int temp = n;  // copy of n to use in digit counting
    int count = 0;

    // Count digits using temp, NOT n
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = n;  // reset temp to original number for calculation
    int AN = 0;

    // Calculate sum of digits^count
    while (temp > 0) {
        int lastDigit = temp % 10;
        AN += pow(lastDigit, count);
        temp = temp / 10;
    }

    // Compare sum with original number n
    if (AN == n) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }

    return 0;
}

