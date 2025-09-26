// prime number
#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number :"<< endl;
    cin>>n;
    int flag=0;

    if(n<2){
        flag =1;
    }
    else{
    for ( int i=2; i<n; i++){
        if(n%i==0){ // to see is the no divisible by any no except 1 and itself
            flag=1;
            break;
         }
    }
} // display the result that the no is prime or not
    if(flag==0)
    cout<<n<<" "<< "is a prime number"<<endl;
    else {
    cout << n <<" "<<"is not a prime number"<<endl;
}

// Factor of the entered no
cout<<"Factors of no :"<<" ";
if(flag==1 || flag==0){
    for ( int i=1;i<=n;i++){
        if(n%i==0){
            cout<<(i )<< ", ";
        }
    }

}
    

    return 0; 
}
