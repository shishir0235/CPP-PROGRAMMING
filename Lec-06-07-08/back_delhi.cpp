#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int even=0,odd=0;
	int temp=n;
	while(temp>0){
		int rem=temp%10;
		if(rem%2==0)
			even =even+rem;
		else
			odd=odd+rem;
		temp=temp/10;
	}
	if(even%4==0 || odd%3==0)
		cout<<"Yes"<<endl;
	
	else
		cout<<"No"<<endl;
	
	}
	return 0;
}