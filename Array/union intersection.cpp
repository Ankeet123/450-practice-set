#include<bits/stdc++.h>
using namespace std;
    
int doUnion(int a[], int n, int b[], int m)  {
    // int i=0, j= 0, k = 0;
    // int c[n+m];
    // while(i<n && j<m){
    //     if(a[i] < b[j])
    //         c[k++] = a[i++]; 
    //     else if(b[j] < a[i])
    //         c[k++] = b[j++];
    //     else{
    //         c[k++] = b[j++];
    //         i++;
    //     }
    // }
    // while(i<n){
    //     c[k++] = a[i++]; 
    // }
    // while(j<m){
    //     c[k++] = b[j++];
    // }
    
    // return k;
    set<int> s;

    for(int i=0;i<n;i++){

        s.insert(a[i]);

    }

    for(int i=0;i<m;i++){

        s.insert(b[i]);

    }

    return s.size();
    //code here
}

int doIntersection(int a[], int b[], int m, int n){
    unordered_set<int> s;
    int count = 0;
    for(int i = 0; i<m; i++){
        s.insert(a[i]);
    }

    for(int j = 0; j<n; j++){
        if(s.find(b[j])!=s.end()){

            s.erase(b[j]);

            count++;
        }
    }
    return count;
}