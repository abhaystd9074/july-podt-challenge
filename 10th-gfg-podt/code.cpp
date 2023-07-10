#include<bits/stdc++.h>
using namespace std;
 void transpose(vector<vector<int> >& matrix, int n)
    { 
       for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
               swap(matrix[i][j],matrix[j][i]);
           }
       }
       
    }
 int main(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    transpose(v,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

 }