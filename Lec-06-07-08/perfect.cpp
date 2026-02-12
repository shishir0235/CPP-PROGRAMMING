#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the positive number :";
    cin>>n;
    if(n<=0){
        cout<<"Invalid :";
    }

    for(int i=1; i<n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    if(sum == n ){
        cout<<"Perfect Number !";
    }    
    else{
        cout<<"Not a Perfect Number !";
    }
}