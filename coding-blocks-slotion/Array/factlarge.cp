#include<iostream>
using namespace std;
#define MAX 1000
void multiply(int n) {
	int res[MAX];
	res[0]=1;
	int res_size=1;

	for(int x=2;x<=n;x++) {
		int carry=0;
		for(int i=0;i<res_size;i++) {
			int prod=res[i]*x+carry;
			res[i]=prod%10;
			carry=prod/10;
		}
		while(carry) {
			res[res_size]=carry%10;
			carry=carry/10;
			res_size++;
		}
	}
	for(int i=res_size-1;i>=0;i--) {
		cout<<res[i];
	}
}
int main() {
	int n;
	cin>>n;
	multiply(n);
}