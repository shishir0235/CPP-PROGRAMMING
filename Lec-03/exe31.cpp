/*
5 4 3 2 *  
5 4 3 * 1  
5 4 * 2 1  
5 * 3 2 1  
* 4 3 2 1  
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        for(int j=n; j>=1; j--)
        {
            if(i+j==6) cout<<"*";
            else {
                cout<<j;
            }
        }
        cout<<endl;
    
}
}