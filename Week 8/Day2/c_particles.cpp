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

        set<int> zero;
        for(int i = 0 ; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] == 0) zero.insert(i);
        }

        if(n == 1)
        {
            cout<<arr[0]<<"\n";
            continue;
        }

        for(int i = 0; i < n; i++)
        {
            if(arr[i] < 0)
            {
                if(i == 0 || i == n - 1) arr[i] = 0;
                else
                {
                    arr[i-1] = arr[i-1] + arr[i+1];
                    arr[i] = 0;
                    arr[i+1] = 0;
                }
            }
        }

        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] != 0 || zero.find(i) != zero.end())
            {
                res.push_back(arr[i]);
            }
        }

        long long int even = 0, odd = 0;
        for(int i = 0; i < res.size(); i++)
        {
            if(i % 2) odd += res[i];
            else even += res[i];
        }
        cout<<max(even, odd) << "\n";
    }

    return 0;
}