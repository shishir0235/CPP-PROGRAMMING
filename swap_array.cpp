#include<iostream>
using namespace std;
int main(){
    int n,idx1,idx2;
    cout<<"Enter the elements of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>idx1>>idx2;
    if(idx1<n && idx2<n){
    int temp = arr[idx1];
    arr[idx1]=arr[idx2];
    arr[idx2]=temp;
    }
    else{
        cout<<"Error";
    }
    cout<<
    }
    
