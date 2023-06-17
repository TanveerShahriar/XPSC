#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size(), i = 0, j = 0, ans = 0;
    long long int s = 0;

    while(j < n)
    {
        s += a[j];
        if(s > k)
        {
            while(s > k)
            {
                s -= a[i];
                i++;
            }
        }
        if (s == k) ans = max(ans, j-i+1);
        j++;
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    cout<<longestSubarrayWithSumK(arr, k);

    return 0;
}