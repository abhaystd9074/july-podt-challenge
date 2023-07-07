#include<bits/stdc++.h>
using namespace std;
 
   void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            ////   main code is starting from there
            
           int i=0,k=n-1,j=0;
           while(i<=k and j<m){
               if(arr1[i]>arr2[j]){
                   swap(arr1[k],arr2[j]);
                   j++;
                   k--;
               }
               else {
                   i++;
               }
           }
           sort(arr1,arr1+n);
           sort(arr2,arr2+m);
           
        } 
 
 int main(){
    int n,m;
    cin>>n>>m;
    long long arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
  merge(arr1,arr2,n,m);
  for(int i=0;i<n;i++){
    cout<<arr1[i]<<" ";
  }
  for(int i=0;i<m;i++){
    cout<<arr2[i]<<" ";
  }
  return 0;

 }