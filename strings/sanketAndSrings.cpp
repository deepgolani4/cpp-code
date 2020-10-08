#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
	int k;
  	cin>>k;
    string str;
    cin>>str;
    int left=0, ans=0;
    int count[2] = {0};
    for (int i=0;i < str.length();i++) {
        char c =str[i];
        count[c-'a']++;
        if(min(count[0], count[1]) > k) {
            count[str[left]-'a']--;
            left++;
        } else {
            ans++;
        }
    }
    cout<<ans;

	
}
