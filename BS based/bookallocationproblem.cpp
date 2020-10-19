You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

Input Format
First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

Constraints
1 < t < 50
1< n < 100
1< m <= 50
1 <= Ai <= 1000

Output Format
Print the maximum number of pages that can be assigned to students.

Sample Input
1
4 2
12 34 67 90
Sample Output
113 
Explanation
1st students : 12 , 34, 67 (total = 113)
2nd students : 90 (total = 90)
Print max(113, 90)



#include<bits/stdc++.h> 
using namespace std; 
  
// Utility function to check if current minimum value 
// is feasible or not. 
bool isPossible(int arr[], int n, int m, int curr_min) 
{ 
    int studentsRequired = 1; 
    int curr_sum = 0; 
  
    // iterate over all books 
    for (int i = 0; i < n; i++) 
    { 
        // check if current number of pages are greater 
        // than curr_min that means we will get the result 
        // after mid no. of pages 
        if (arr[i] > curr_min) 
            return false; 
  
        // count how many students are required 
        // to distribute curr_min pages 
        if (curr_sum + arr[i] > curr_min) 
        { 
            // increment student count 
            studentsRequired++; 
  
            // update curr_sum 
            curr_sum = arr[i]; 
  
            // if students required becomes greater 
            // than given no. of students,return false 
            if (studentsRequired > m) 
                return false; 
        } 
  
        // else update curr_sum 
        else
            curr_sum += arr[i]; 
    } 
    return true; 
} 
  
// function to find minimum pages 
int findPages(int arr[], int n, int m) 
{ 
    long long sum = 0; 
  
    // return -1 if no. of books is less than 
    // no. of students 
    if (n < m) 
        return -1; 
  
    // Count total number of pages 
    for (int i = 0; i < n; i++) 
        sum += arr[i]; 
  
    // initialize start as 0 pages and end as 
    // total pages 
    int start = 0, end = sum; 
    int result = INT_MAX; 
  
    // traverse until start <= end 
    while (start <= end) 
    { 
        // check if it is possible to distribute 
        // books by using mid as current minimum 
        int mid = (start + end) / 2; 
        if (isPossible(arr, n, m, mid)) 
        { 
            // if yes then find the minimum distribution 
            result = min(result, mid); 
  
            // as we are finding minimum and books 
            // are sorted so reduce end = mid -1 
            // that means 
            end = mid - 1; 
        } 
  
        else
            // if not possible means pages should be 
            // increased so update start = mid + 1 
            start = mid + 1; 
    } 
  
    // at-last return minimum no. of  pages 
    return result; 
} 
  
// Drivers code 
int main() 
{ 
	int number;
	cin>>number;
	for(int q=0;q<number;q++) {
	int n,m;
	cin>>n>>m;
	int arr[100];
	for(int z=0;z<n;z++) {
		cin>>arr[z];
	}
  
    cout << findPages(arr, n, m) << endl; 
	}
}
