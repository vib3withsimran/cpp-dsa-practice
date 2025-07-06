#include<iostream>
#include<math.h>
using namespace std;


long long binary(int num) {
    long long bin = 0;
    int place = 1;  // To maintain place value (1, 10, 100, ...)

    while (num > 0) {
        int remainder = num % 2;
        num /= 2;
        bin += remainder * place;  // Construct binary number without pow()
        place *= 10;  // Increase place value
    }
    
    return bin;
}

int main() {
    int num;
    cout << "Enter a decimal number to convert it to binary: ";
    cin >> num;

    long long binaryResult = binary(num);
    cout << "Equivalent Binary: " << binaryResult << endl;
    
    return 0;
}