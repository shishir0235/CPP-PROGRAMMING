/*
        *  
      * *  
    * * *  
  * * * *  
* * * * *  
  * * * *  
    * * *  
      * *  
        *  

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    // Upper Half

    for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++)
    {
        cout<<" ";
    }
    for(int k=1; k<=i; k++)
    {
        cout<< "*";
    }
    cout<<endl;
    }
    // Lower Half

    for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++)
    {
        cout<<" ";
    }
    for(int k=n-1; k>=i; k--)
    {
        cout<< "*";
    }
    cout<<endl;
}
}