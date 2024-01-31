// The program counts the number of set bits in the program which are inputted by the user 


#include <iostream>

using namespace std;

// Function to count set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int num1, num2;

    // Input first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Count set bits and display the result
    int setBitsNum1 = countSetBits(num1);
    int setBitsNum2 = countSetBits(num2);

    cout << "Number of set bits in the first number: " << setBitsNum1 << endl;
    cout << "Number of set bits in the second number: " << setBitsNum2 << endl;

    return 0;
}