#include<bits/stdc++.h>
using namespace std;

int kthMin(int arr[], int k){
    int n = sizeof(arr)/sizeof(arr[0]);
    if(k>0 && k <=n){
        sort(arr, arr+n);
        return arr[k-1];
    }
    return INT_MAX;
}

int kthMax(int arr[], int k){
    int n = sizeof(arr)/sizeof(arr[0]);
    if(k>0 && k <=n){
        sort(arr, arr+n);
        return arr[n-k+1];
    }
    return INT_MIN;
}

