#include <iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int ispalindrome=1;
	int j=s.length();
	for(int i=0;i<j/2;i++){
		if(s[i]!=s[j-i-1]){
			ispalindrome=0;
			break;
		}}
		if(ispalindrome)
		cout<<"YES";
		else
		cout<<"NO";
		return 0;
}