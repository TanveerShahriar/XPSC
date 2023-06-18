#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        int arr[n][m];

        for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin>>arr[i][j];

        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int res = 0;
                int ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    res += arr[ci][cj];
                    ci--;
                    cj--;
                }

                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    res += arr[ci][cj];
                    ci++;
                    cj--;
                }

                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    res += arr[ci][cj];
                    ci--;
                    cj++;
                }

                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    res += arr[ci][cj];
                    ci++;
                    cj++;
                }

                res -= arr[i][j] * 3;
                mx = max(mx, res);
            }
        }
        cout<<mx<<"\n";
        
    }

    return 0;
}