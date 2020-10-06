Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format
Enter a number N , add N more numbers

Constraints
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int nn=n-1,i,count=0;
	for(i=0;i<n/2;i++) {
		if(a[i]==a[nn-i]) {
			continue;
		} else {
			count=1;
			cout<<"false";
			break;
		}
	}
	if(count==!1) {
		cout<<"true";
	}
	

}
