#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n][n];

        for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            arr[i][j] = c - '0';
        }

        bool flag = true;

        for(int i = n-2; i >= 0; i--) for(int j = n-2; j >= 0; j--)
        {
            if(arr[i][j] && !arr[i+1][j] && !arr[i][j+1]) flag = false;
        }

        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }

    return 0;
}