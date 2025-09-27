#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the rows (a) and columns (b): ";
    cin >> a >> b;

    int arr1[20][20], arr2[20][20], sum[20][20];

    // Input first array
    cout << "\nEnter the elements of First array:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "Enter element arr1[" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }

    // Input second array
    cout << "\nEnter the elements of Second array:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "Enter element arr2[" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }

    // Sum of the arrays
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display first array
    cout << "\nFirst Array (arr1):" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // Display second array
    cout << "\nSecond Array (arr2):" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // Display sum array
    cout << "\nSum of the two arrays (arr1 + arr2):" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}