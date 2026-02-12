#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
    cout<<"Enter the number :";
	cin>>n;
	int inverse = 0;
	int position = 1;
	while(n>0){
		int rem = n%10;
		inverse = inverse + position*pow(10,rem-1);
		n = n/10;
		position++;
	}
	cout<<"Inverse Number :" <<inverse<<endl;
	return 0;
}