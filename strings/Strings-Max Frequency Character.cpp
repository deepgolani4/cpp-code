Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
	char a[100];
	cin.getline(a,100,' ');
	int len=strlen(a);
	int count=0,countmax=0,pointer;
	sort(a,a+len);
	if(len==1) {
		cout<<a;
		exit(1);
	}
	for(int i=0;i<len;i++) {
		if(a[i]==a[i+1]) {
			count++;
		} 
		else {
			if(count>countmax) {
				countmax=count;
				pointer=i;
			} 
			count=0;
		}
	}
	cout<<a[pointer];
}
