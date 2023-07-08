#include<bits/stdc++.h>
using namespace std;
 bool findTriplets(int arr[], int n)
    { 
    ///////////////////////   main code is starting from here 
      
       sort(arr,arr+n);
       
          
       for(int i=0;i<n;i++){
           int left =i+1;
           int right=n-1;
           while(left<right){
              int  sum=arr[i]+arr[left]+arr[right];
               if(sum==0) return true;
              else  if(sum<0)  left++;
               else if(sum>0)   right--;
           }
       }
       return false;   }


 int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findTriplets(a,n)<<endl;
    return 0;

 }