#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[]){
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<< arr[i] << " ";
    }
}

