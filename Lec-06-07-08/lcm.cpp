#include<iostream>
using namespace std;
int main() {
	long long n1,n2;
	cin>>n1>>n2;
	long long a = n1;
	long long b = n2;
	while(b!=0)
	{
		long long rem = a%b;
		a = b;
		b = rem;
	}
	long long gcd = a;
    long long lcm = (n1/gcd)*n2;
	cout<<lcm<<endl;
	return 0;
}