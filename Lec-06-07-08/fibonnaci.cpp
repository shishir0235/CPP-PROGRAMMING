#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a=0,b=1,next; 
	for(int i=2; i<=n; i++){
		next = a+b;
		a = b;
		b = next;
	}
	cout<<next<<" ";
	return 0;
}