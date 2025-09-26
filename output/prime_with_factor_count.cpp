// prime number
#include <iostream>
using namespace std;

int main()
{
    int n, arr[30], factor_count = 0;
    cout << "Enter the number :" << endl;
    cin >> n;
    int flag = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        { // to see is the no divisible by any no except 1 and itself
            arr[factor_count] = i;
            factor_count++;
        }
    }
    // display the result that the no is prime or not
    if (factor_count == 2)
        cout << n << " " << "is a prime number" << endl;
    else
    {
        cout << n << " " << "is not a prime number" << endl;
    }
    for (int i = 0; i < factor_count; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}
