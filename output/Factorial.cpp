#include<iostream>
using namespace std;

int main(){
    int n ; int f=1;
    cout<<"Enter the no.:";
    cin>>n;

    for(int i=n; i>=1; i--){
        f*=i;
    }
    cout<<"The Factorial of the number is: "<< f;

    return 0;
}