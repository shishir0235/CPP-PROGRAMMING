#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    int copy = n;
    while(n>0){
        int rem = n % 10;
        sum = sum + rem;
        n = n/10;
    }
    cout<<"Sum : "<<sum<<endl;
    if(copy % sum == 0){
        cout<<"Harshad or Niven Number !";
    }
    else{
        cout<<"Not Harshad Number !";
    }
    return 0;

}