#include<iostream>
using namespace std;
int add(int[], int);

int main ( ) {
int n;
cout<<"Enter the size of the array:";
cin>>n;

int arr[n];
cout<<"Enter the "<< n<<" "<< "elements of the array:";
for(int i=0; i<n;i++){
    cin>>arr[i];
} int sum = add(arr,n);

cout<<"Sum of the elements of the array is ="<<" "<<sum;
return 0;
}
//function definition
int add(int arr[],int a){
    int sum=0;
    for (int i=0; i<a; i++){
        sum+=arr[i];
    }return sum;
}