#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	cin>>a[0];
	for(int i=1;i<n;i++) {
		cin>>a[i];
		if(a[i]<a[i-1]){
			cout<<i-1;
			break;
		}
		
	}
}



You are given a sorted but rotated array. You need to fine the index of the pivot element of the array where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.

Input Format
The first line denotes N - the size of the array. The following N lines each denote the numbers in the array.

Constraints
Output Format
Output the index of the pivot of the array.

Sample Input
5
4
5
1
2
3
Sample Output
1
Explanation
Here, 5 is the pivot element. Thus the output is 1 which is 5's index.
