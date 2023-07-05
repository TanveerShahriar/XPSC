#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];

        long long res = 0;
        int mx = arr[0];

        for(int i = 1; i < n; i++)
        {
            if((arr[i] < 0 && arr[i-1] < 0) || (arr[i] > 0 && arr[i-1] > 0))
            {
                mx = max(mx, arr[i]);
            }
            else
            {
                res += mx;
                mx = arr[i];
            }
        }
        res += mx;

        cout<<res<<"\n";
    }

    return 0;
}