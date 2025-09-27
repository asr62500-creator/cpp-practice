#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the rows (a) and columns (b): ";
    cin >> a >> b;

    int arr1[20][20], arr2[20][20], sum[20][20];

    // Enter the first array
    cout << "Enter the elements of First array:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr1[i][j];
        }
    }cout<<endl;

    // Enter the second array
    cout << "Enter the elements of Second array:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr2[i][j];
        }
    } cout<<endl;

    // Sum of the arrays
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }cout<<endl;

    // Display sum
    cout << "Sum of array in 2D is:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
