#include<iostream>
using namespace std;
int main() {
	int n,sum1 =0,sum2 =0;
	cin>>n;
	int temp =n;
	while(temp>0)
	{
		sum1 = sum1 + temp % 10;
		temp = temp / 10;
	}
	
    temp =n;
	for(int i=2; i<=temp; i++)
	{
       while(temp % i ==0)
	   {
		   int x =i;
		   while(x>0)
		   {
			   sum2 = sum2 + x % 10;
			   x = x / 10;
		   }
		   temp = temp / i;
	   }
	}
	if(sum1 == sum2)
	{
		cout<<"1";
	}
	else 
	{
		cout<<"0";
	}
}