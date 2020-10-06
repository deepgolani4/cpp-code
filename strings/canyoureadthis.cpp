One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.

Input Format
A single line contains the string.

Constraints
|S|<=1000

Output Format
Print words present in the string, in the order in which it appears in the string.

Sample Input
IAmACompetitiveProgrammer
Sample Output
I
Am
A
Competitive
Programmer
Explanation
There are 5 words in the string.

#include<iostream>
#include <cctype> 
#include<cstring>
using namespace std;
int main() {
	char a[1000];
	cin.getline(a,1000,' ');
	int len=strlen(a);
	for(int i=0;i<len;i++) {
		if(isupper(a[i])) {
			cout<<endl;
			cout<<a[i];
		} else {
			cout<<a[i];
		}
	}
}
