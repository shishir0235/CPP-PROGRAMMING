#include<iostream>
using namespace std;
bool isAutomorphic(int n){
    if(n<0)
    return false;
    long long square = (long long)n*n;
    while(n>0){
    if(n %10 != square %10){
    return false;
    }
    n=n/10;
    square=square/10;
   }
    return true;
 }
int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    if(isAutomorphic(num))
    cout<<"Automorphic";
    else{
        cout<<"Not Automorphic";
    }
    return 0;
}