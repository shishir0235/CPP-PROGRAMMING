#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i=0; i<s.length();i++){
		int t= s[i]-'0';
		int inverted = 9-t;
		if(i==0 && inverted==0)
		{
			continue;
		}
	if(inverted < t){
		s[i]= inverted +'0';
	}
	}
	cout<<s<<endl;
	return 0;
}