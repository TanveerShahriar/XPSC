#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        long long int n, q;
        cin >> n >> q;

        long long int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];

        long long int sum = 0, ol = 0, el = 0;

        for(int i = 0; i < n; i++)
        {
            if (arr[i] % 2) ol++;
            else el++;
            sum += arr[i];
        }

        for(int i = 0; i < q; i++)
        {
            long long int ty,x;
            cin>>ty>>x;

            if(ty == 0)
            {
                sum += el * x;
                if (x % 2)
                {
                    ol += el;
                    el = 0;
                }
            }
            else{
                sum += ol * x;
                if(x % 2)
                {
                    el += ol;
                    ol = 0;
                }
            }

            cout<<sum<<"\n";
        }
    }

    return 0;
}