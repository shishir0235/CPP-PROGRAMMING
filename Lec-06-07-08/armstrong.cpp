#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n,sum=0,count=0;
	cin>>n;
	int temp =n;
    while (temp> 0) {
        temp /= 10;
        count++ ;	
    }
	int copy = n;
	while(n>0){
		int rem =n%10;
		sum = sum+pow(rem,count);
		n/=10;
	}
	if(sum==copy){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}