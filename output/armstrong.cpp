#include<iostream>
using namespace std;

int main(){
    int n,originalNo,r,sum=0;
    cout<< "Enter a number:"<<endl;
    cin>>n;
    originalNo=n;

    while(n!=0){
        r=n%10;
        sum = sum + r*r*r;
        n=n/10;
    }
    if(originalNo==sum){
        cout<<"the no"<<" "<<sum<<" "<< "is an Armstrong";
    } else 
    cout<<"the no"<<" "<<sum<<" "<< "is not an Armstrong";
    
    return 0;
}