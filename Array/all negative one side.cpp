#include<bits/stdc++.h>
using namespace std;

int sortNeg(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0, hi = n-1;
    while(lo<=hi){
        if(arr[lo]<0){
            lo++;
        }
        else if (arr[hi]>0){
            hi--;
        }
        else
            swap(arr[lo], arr[hi]);
    }

}