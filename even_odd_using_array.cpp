#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array you want :";
    cin>>n;
    int arr[n];
    cout <<"Enter the"<<" "<<n<<" "<<"elements of the array:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    } 
    // display array 
    cout <<"The array is:";
    for(int i=0; i<n;i++){
        cout<<" | "<<arr[i]<<" | ";
    }cout<<endl;
    // display even elements
    cout<<"Even elts of the array: (";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<" "<<arr[i]<<" , ";
        } 
    } 
    // display odd elements
    cout<<")"<<endl;
    cout<<"odd elts of the array: (";
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<" "<<arr[i]<<" , ";
        }
    }cout<<")";

    return 0;
}