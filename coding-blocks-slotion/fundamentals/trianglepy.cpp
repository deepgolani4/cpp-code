#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		int max=0,min,k=0,num,j,count=0;
		cin>>num;
		int a[num];
		for(j=0;j<num;j++) {
			cin>>a[j];
		}
		min=INT_MIN;
		for(k=0;k,num;k++) {
            for(int p=k;p<num;p++) {             
                max=max+a[p];
                if(min<max) {
                    min=max;
                }
                if(max<0) {
                    max=0;
                }
            }
            for(int l=0;l<k;l++) {
                if(min<max) {
                    min=max;
                }
                if(max<0) {
                    max=0;
                }
            }
            	
		}
        
		cout<<min<<endl;
		
	}
}