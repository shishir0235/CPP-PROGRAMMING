/*
          *   
      *        *  
  *               *
*                    *
  *                *
      *        *
          *
*/  

// rows and columns are interchanged:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i+j == 5 || 7 || 9 || 11))
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}