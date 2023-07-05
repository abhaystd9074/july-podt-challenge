#include<bits/stdc++.h>
using namespace std;

int stockBuyAndSell(int n, vector<int> &price) {

      ////  main code is startinng  from here 

       int profit=0;
       for(int i=0;i<n;i++){
          int j=i;
          while(j+1<n  and price[j]<price[j+1]){
              j++;
          }
         profit+= price[j]-price[i];
         i=j;
       }
       return profit;
    }

int main(){
    int n;
    cin>>n;
    vector<int>price;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        price.push_back(x);
    }
     cout<<stockBuyAndSell(n, price)<<endl;
     return 0;

}