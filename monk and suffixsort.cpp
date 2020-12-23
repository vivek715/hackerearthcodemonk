// Write your code here
#include <bits/stdc++.h>
 
using namespace std;
 
#define mkp make_pair
#define pb push_back
#define scan(x) scanf("%d", &x)
#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>
vector <string> vec;
string a, b;
int main()
{
	int k, i, j;
	cin >> a >> k;
	for (i = 0; a[i]; ++i) {
	    b= "";
	    for (j = i; a[j]; ++j) {
	        b += a[j];
	    }
	    vec.pb(b);
	}
	sort(vec.begin(), vec.end());
	cout << vec[k-1] << endl;
	
	return 0;
}