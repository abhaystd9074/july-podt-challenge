#include <bits/stdc++.h>
using namespace std;

 int countSubArrayProductLessThanK(const vector<int>& v, int n, long long k) {

    /////////   The main is starting from here

    int j = 0, i = 0, ans;
    long long soFarProduct = 1;
    while (i < n)
    {
        soFarProduct *= v[i];
        while (soFarProduct >= k)
        {
            soFarProduct /= v[j];
            j++;
        }
        ans += (i - j + 1);
    }
    if (ans > 0)
        return ans;
    else
        return 0;

}
int main()
{
    int n;
    cin >> n;
    long long k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
   cout<<countSubArrayProductLessThanK(v,n,k)<<endl;
   return 0;
}
