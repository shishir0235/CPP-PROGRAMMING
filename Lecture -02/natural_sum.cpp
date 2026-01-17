#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter first n natural numbers : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<i<< " "<<endl;
    }
    
    cout<<"Sum of Natural Number is : "<<n*(n+1)/2;
    
}