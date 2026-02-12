/*    *
    * * *
  * * * * *    diamond of stars
    * * *
      *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    // Upper Half              
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //Lower Half              
    for(int i=n-1; i>=1; i--)
    {
        for(int k=1; k<=n-i; k++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}