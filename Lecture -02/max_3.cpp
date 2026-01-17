#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if(a>b && a>c)
        cout<<"Max is : "<<a;
    else if(b>c)
        cout<<"Max is : "<<b;
    else{
        cout<<"Max is : "<<c;
    }
}