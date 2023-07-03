#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
 
 vector<int> prefix(n), suffix(n);
        prefix[0] = v[0];
        suffix[n - 1] = v[n - 1];
        
        for(int i = 1; i < n; i++){
            prefix[i] = min(prefix[i - 1], v[i]);
            suffix[n - i - 1] = max(suffix[n - i], v[n - i - 1]);
        }
        
        int i, j, ans;
        i = j = ans = 0;
        
        while(j < n){
            if(prefix[i] <= suffix[j]){
                ans = max(ans, j - i);
                ++j;
            }
            else{
                ++i;
            }
        }
        
        cout<<ans<<endl;
        return 0;
    }