Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

Input Format
A single String S

Constraints
1 < = length of String < = 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.


#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[100];
	cin.getline(a,100,' ');
	int len=strlen(a);
	int count=0;
	for(int i=0;i<len;i++) {
		if(a[i]==a[i+1]) {
			count++;
		} else {
			cout<<a[i]<<(count+1);
			count=0;
		}
	}
}
