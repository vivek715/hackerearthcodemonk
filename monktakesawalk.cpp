#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; while(t--)
    {
	string s;
	cin>>s;
	int c=0,i=0;
	while(s[i]!='\0')
	{
	    char ch= tolower(s[i]);
	    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') c++;
	    i++;
	}
	cout<<c<<endl;
	
    }
}
