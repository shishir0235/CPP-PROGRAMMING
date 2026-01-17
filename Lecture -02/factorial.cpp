#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter the number : ";
    cin>>n;
    if(n<0)
    cout<<"Factorial does not exist for negative numbers";
    else{
        for(int i=n; i>=1; i--)
        {
            fact=fact*i;
        }
        cout<<"Factoial of " << n << " is : "<<fact;
    }
    }