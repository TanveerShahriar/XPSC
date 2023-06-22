#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];

        string s, z = "YES";
        cin>>s;

        for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && s[i] != s[j])
            {
                z = "NO";
                break;
            }
        }
        cout<<z<<"\n";
    }

    return 0;
}