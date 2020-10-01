// 0 
// 1    1 
// 2    3     5 
// 8   13    21    34

#include<iostream>

int main() {
int n,count=2,j=0;
std::cin>>n;
int t1 = 0, t2 = 1, ne = 0;

std::cout<<"0\n";

    
for(int i=0;i<((n*(n+1))/2)-1;i++) {
    t1 = t2;
    t2 = ne;
    ne = t1 + t2;
    std::cout<<ne<<"    ";
    j++;
    if(j==count) {
        std::cout<<"\n";
        count++;
        j=0;
    }
    
}
}