
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

Input Format
First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.

Constraints
2 <= N <= 100,000
0 <= xi <= 1,000,000,000
2 <= C <= N

Output Format
Print one integer: the largest minimum distance.

Sample Input
5 3
1 2 8 4 9
Sample Output
3
Explanation






#include<iostream>
using namespace std;

bool canplacecows(int cows, int stall[], int min,int n){

    int last_cow=stall[0];
    int cnt=1;
    for(int i=1 ; i<n ; i++){
        if( stall[i]-last_cow >= min){
            last_cow=stall[i];
            cnt++;
            if(cnt == cows)
                return true;
        }
    }
    return false;
}

int main() {
    
	int n,cows;
	cin>>n>>cows;
	int stalls[n];
	for(int q=0;q<n;q++) {
		cin>>stalls[q];
	}
	int s=0,e=stalls[n-1]-stalls[0],ans;

    while(s <= e){
        
        int mid=(s+e)/2;
        bool pos=canplacecows(cows,stalls,mid,n);
        
        if(pos){
            ans=mid;
            s=mid+1;
        }
         else    
            e=mid-1;
    }
    cout<<ans;
        
    return 0;
}
