// Given an array, rotate the array by one position in clock-wise direction.
 

// Example 1:

// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4
#include<bits/stdc++.h>
using namespace std;
void rotate(int a[], int n)
{
    int i;
    int x = a[n-1];
    for(i = n-1; i>0; i--){
        a[i] = a[i-1];
    }
    a[0] = x;
}