#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the numbers : ";
    cin>>a>>b;
    while (b!=0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }
    cout<<"Greatest Common Divisor is : "<<a;
}