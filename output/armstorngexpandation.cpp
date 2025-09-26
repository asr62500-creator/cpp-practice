#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, originalNo, r, sum = 0, digits = 0;

    // Step 1: Ask user for a number
    cout << "Enter a number:" << endl;
    cin >> n;

    // Step 2: Store original number for later comparison
    originalNo = n;

    // Step 3: Count how many digits are in the number
    for(int temp = n; temp != 0; temp = temp / 10){
        digits++;
    }
  
    // Example: If n = 153 → digits = 3

    // Step 4: Print the number followed by '=' sign for calculation
    cout << originalNo << " = ";

    // Step 5: Copy n to temp to use in calculation without altering n
    int temp = n;

    // Step 6: Loop to calculate sum of each digit raised to the power of total digits
    while(temp != 0){
        r = temp % 10; // Get last digit
        cout << r << "^" << digits; // Print the calculation part for explanation   
        sum = sum + ceil(pow(r, digits));// Add digit^digits to sum
        temp = temp / 10; // Remove last digit

        if(temp != 0){
            cout << " + "; // Show addition for the next digit
        }
    }

    // Step 7: Print final sum
    cout << " = " << sum << endl;

    // Step 8: Compare sum with original number
    if(originalNo == sum){
        cout << "The number " << originalNo << " is an Armstrong number." << endl;
    } else {
        cout << "The number " << originalNo << " is not an Armstrong number." << endl;
    }

    return 0;
}
