#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	

	cin>>n;
	for(int i=0;i<n;i++) {
		int max=0,min,k=0;
		
		int num,j;
		cin>>num;
		int a[num];
		for(j=0;j<num;j++) {
			cin>>a[j];
		}
		min=INT_MIN;
		for(k;k<num;k++) {
			max=max+a[k];
			if(min<max) {
				min=max;
			}
			if(max<0){
				max=0;
			}
			
		}
		cout<<min<<"\n";
		
		
	
	}
	
}