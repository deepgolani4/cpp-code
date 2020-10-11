You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Input Format
The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an integer N, the number of activities. Then the next N lines contain two integers m and n, the start and end time of each activity.

Constraints
1<=t<=50
1<=n<=10000
1<=A[i]<=100

Output Format
For each test case find the maximum number of activities that you can do.

Sample Input
1 
3
10 20
12 15
20 30
Sample Output
2
Explanation
Person can only do 0th and 2nd activities.



#include<iostream>
using namespace std;

void tact(int s[], int e[], int n) 
{ 
    int i,j; 
    i=0; 
    int count=1;
	for (j=1;j<n;j++) 
    {  
      if (s[j]>=e[i]) 
      { 
          count++; 
          i=j; 
      } 
    }
	cout<<count; 
};
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		int num;
		cin>>num;
		int start[num],end[num];
		int k=0,l=0;
		for(int j=0;j<2*num;j++) {
			if(j%2==0) {
				cin>>start[k];
				k++;
			} else {
				cin>>end[l];
				l++;
			}
		}
		tact(start,end,num);
		
	}
}
