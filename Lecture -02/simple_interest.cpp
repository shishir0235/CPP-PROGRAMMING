#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter principal : ";
    cin>>p;
    cout<<"Enter rate : ";
    cin>>r;
    cout<<"Enter time : ";
    cin>>t;
    cout<<"Simple Interest : "<<(p*r*t)/100;
}