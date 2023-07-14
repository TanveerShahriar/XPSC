#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        int res = INT_MAX;
        for(int i = 1; i < n - 1; i++)
        {
            int t1 = abs(a[i-1] - a[i]);
            int t2 = abs(a[i] - a[i+1]);
            if(res > max(t1, t2)) res = max(t1,t2);
        }

        if(res > abs(a[0] - a[1])) res = abs(a[0] - a[1]);
        if(res > abs(a[n-2] - a[n-1])) res = abs(a[n-2] - a[n-1]);
        cout<<res<<"\n";
    }   

    return 0;
}