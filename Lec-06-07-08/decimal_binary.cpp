#include<iostream>
using namespace std;
int main(){
    int decimal,binary=0,base=1;
    cout<<"Enter the decimal number : ";
    cin>>decimal;

    while(decimal>0){
        int rem = decimal%10;
        binary = binary+ rem*base;
        decimal=decimal/10;
        base = base /2;
   }
   cout<<decimal;
   return 0;
}