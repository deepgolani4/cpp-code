You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

Input Format
First line contains integer t which is number of test case.
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .

Constraints
1<=t<=100
1<=m<=100
1<=A[i]<=10^5

Output Format
Print the largest value.

Sample Input
1
4
54 546 548 60
Sample Output
6054854654
Explanation
Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.



#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int compares(string x,string y) {
	string xy=x.append(y);
	string yx=y.append(x);
	return xy.compare(yx) > 0 ? 1 : 0;
}

int main() {
	int n;
	while(n--) {
		int num;
		cin>>num;
		string a[num];
		for(int i=0;i<num;i++) {
			int x;
			cin>>x;
			a[i]=to_string(x);
		}
		sort(a,a+num,compares);
		for(int i=0;i<num;i++) {
			cout<<a[i];
		}
	}

}
