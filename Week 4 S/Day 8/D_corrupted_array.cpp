#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> b(n+2);
        for(int i = 0; i < n+2; i++) cin>>b[i];

        sort(b.begin(), b.end());

        long long sum = 0;
        for(int i = 0; i < n; i++) sum += b[i];

        bool flag = false;

        if(sum == b[n] || sum == b[n+1])
        {
            flag = true;
            for(int i = 0; i < n; i++) cout<<b[i]<<" ";
            cout<<"\n";
            continue;
        }

        for(int i = 0; i < n; i++)
        {
            long long temp = sum;
            temp -= b[i];
            temp += b[n];
            if(temp == b[n+1])
            {
                flag = true;
                for(int j = 0; j < n; j++)
                {
                    if(j != i) cout<<b[j]<<" ";
                }
                cout<<b[n];
                break;
            }
        }

        if(!flag) cout<<-1;
        cout<<"\n";
    }

    return 0;
}