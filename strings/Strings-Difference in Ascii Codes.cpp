Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format
String

Constraints
Length of String should be between 2 to 1000.

Output Format
String

Sample Input
acb
Sample Output
a2c-1b
Explanation
For the sample case, the Ascii code of a=97 and c=99 ,the difference between c and a is 2.Similarly ,the Ascii code of b=98 and c=99 and their difference is -1. So the ans is a2c-1b.

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[100];
	cin.getline(a,100,' ');
	int len=strlen(a);
	for(int i=0;i<(len-1);i++) {
		int diff=int(a[i+1])-int(a[i]);
		cout<<a[i]<<diff;
	}
	cout<<a[len-1];

