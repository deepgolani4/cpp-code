#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<(n/2);j++) {
			int temp=a[i][j];
			a[i][j]=a[i][n-1-j];
			a[i][n-1-j]=temp;

		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}

}

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 