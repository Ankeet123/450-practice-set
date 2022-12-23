// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) 
// which has the maximum sum and return its sum.




#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
    int maxi = 0;
    int max_so_far = INT_MIN;

    for(int i = 0; i<n; i++){
        maxi+=arr[i];

        if(max_so_far < maxi)
            max_so_far = maxi;
        
        if(maxi<0)
            maxi = 0;
    }
    return max_so_far;
}
