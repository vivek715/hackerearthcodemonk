/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>

//using namespace std;

int main() {
	int n;
	long long x;
	long long monk=0;
	scanf("%d %lld", &n, &x);
	int arr[n];
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);

	int maxLen = 0;
	int i=0, j=0;

	while(monk + arr[j] <= x && j<n){
		monk += arr[j++];
		maxLen++;
	}
	while(j < n && maxLen){
		while(monk <= x && j<n && maxLen){
			monk -= arr[i++];
			 monk += arr[j++];
		}
		while(monk > x && maxLen){
			monk -= arr[i++];
			maxLen--;
		}
	}
	printf("%d", maxLen);
}