#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        if(n == 3) cout<<-1;
        else
        {
            for(int i = 3; i <= n; i++) cout<<i<<" ";
            cout<<2<<" "<<1;
        }
        cout<<"\n";
    }

    return 0;
}