#include<bits/stdc++.h>
using namespace std;

int max(int arr[]){
    int maxi = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        if(maxi < arr[i])
            maxi = arr[i];
    }

    return maxi;
}

int min(int arr[]){
    int mini = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        if(mini > arr[i])
            mini = arr[i];
    }

    return mini;
}