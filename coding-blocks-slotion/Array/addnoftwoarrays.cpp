#include<iostream>
using namespace std;
void sumofarray(int a[],int b[],int m, int n) {
	//m>n
	int i=m-1;
	int j=n-1;
	int k=m-1;
	int sum[m],addn,carry=0;
	while(j>=0) {
		addn=a[i]+b[j]+carry;
		sum[k]=addn%10;
		carry=addn/10;
		i--;
		j--;
		k--;
	}
	while(i>=0) {
		addn=a[i]+carry;
		sum[k]=addn%10;
		carry=addn/10;
		k--;
		i--;
	}
	int summ=0;
	if(carry) {
		summ=10;
	}
	
	for (int q=0;q<m;q++) {
		summ=summ+sum[q];
		summ=summ*10;

	}
	summ=summ/10;
	
	int h=to_string(summ).length();
	int disp[(h-1)];
	
	for(int w=(h-1);w>=0;w--) {
		disp[w]=summ%10;
		summ=summ/10;
	}
	for(int w=0;w<h;w++) {
		cout<<disp[w]<<", ";
	}cout<<"END";

}
int main() {
	int m,n;
	cin>>m;
	int a[m];
	for(int i=0;i<m;i++) {
		cin>>a[i];
	}
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++) {
		cin>>b[i];
	}
	if(m>n) {
		sumofarray(a,b,m,n);
	
	} else {
		sumofarray(b,a,n,m);
	}
	
}


Sample Input
4
1 0 2 9
5
3 4 5 6 7

Sample Output
3, 5, 5, 9, 6, END