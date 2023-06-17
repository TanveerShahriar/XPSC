#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin >> n;
        
        set<int> un;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            un.insert(a);
        } 

        int sz = un.size();

        if (n % 2 != sz % 2) sz--;
        cout<<sz<<"\n";

    }

    return 0;
}