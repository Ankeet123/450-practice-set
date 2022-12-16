// Q. Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<bits/stdc++.h>
using namespace std;


    void sort012(int a[], int n)
    {
        int lo = 0;
        int mid = 0;
        int hi = n-1;
        
        while(mid<=hi){
            if(a[mid]==0){
                swap(a[lo++], a[hi++]);
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[mid], a[hi--]);
            }
        }
    }