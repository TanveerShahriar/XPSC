#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int l, int r, int d)
{
    if(r < l) return;
    if(l == r)
    {
        a[l] = d;
        return;
    }
    else
    {
        int midx = l;
        for(int i = l; i <= r; i++)
        {
            if(a[i] > a[midx]) midx = i;
        }
        a[midx] = d;
        solve(a, l, midx-1, d+1);
        solve(a, midx+1, r, d+1);
    }
}

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        solve(a, 0, n-1, 0);

        for(int i = 0; i < n; i++) cout<<a[i]<<" ";
        cout<<"\n";
    }

    return 0;
}