#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0; i<=n; i++){
    for(int j=1; j<=i*4; j++)
    {
        cout<<" ";
    }
    for(int k=n; k>=i; k--)
    {
        cout<< "*"<<" ";
    }
    cout<<endl;
}
 for(int i=1; i<=n; i++){
    for(int j=n; j>=i*2; j--)
    {
        cout<<" ";
    }
    for(int k=i; k<=n; k++)
    {
        cout<< "*"<<" ";
    }
    cout<<endl;
}
}