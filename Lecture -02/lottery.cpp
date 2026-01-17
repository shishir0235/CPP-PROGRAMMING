#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if (n >= 300 and n <= 460)
    cout<<"Prize is Macbook !";
    else if(n >= 200 and n <= 280)
    cout<<"Prize is Kurkure !";
    else if(n >= 1100 and n <= 1500)
    cout<<"Prize is Cycle !";
    else if(n > 50 and n <= 80)
    cout<<"Prize is Bike !";
    else
    {
        cout<<"Better Luck Next Time !!";
    }
}