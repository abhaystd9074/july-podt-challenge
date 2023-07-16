#include<iostream>
using namespace std;
int main(){
    cout<<"size of array :- ";
    int n;  // size  of array 
    cin>>n;
    int a[n];  // declering an array :- 
    for(int i=0;i<n;i++){
        cin>>a[5];
    }
    cout<<"output array is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}