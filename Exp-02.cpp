#include <iostream>

using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << "The number " << num << " is a palindrome." << endl;
    } else {
        cout << "The number " << num << " is not a palindrome." << endl;
    }

    return 0;
}
