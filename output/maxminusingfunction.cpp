#include<iostream>
using namespace std;
int maximum(int[],int);
int minimum(int[],int);

int main(){
    int n;
    
    cout<<"Enter the size of the array you want:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Elements of the array:"<<" | "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=maximum(arr,n);
    int min=minimum(arr,n);
  
    cout<<"Largest number in the array is: "<<max<<endl;
    cout<<"Smallest number in the array is: "<<min<<endl;
     
    return 0;
}
int maximum( int arr[],int a){
      int max=arr[0];
    for( int i=0;i<a;i++){
        if(arr[i]>max){
            max=arr[i];   
        } 
    }  return max;
}
int minimum( int arr[],int b){
      int min=arr[0];
    for( int i=0;i<b;i++){
        if(arr[i]<min){
            min=arr[i];   
        }
    }  return min;
}
