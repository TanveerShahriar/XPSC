#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int m;
        cin>>m;
        cout<<1l*m - (long long)pow(10, (int)log10(m))<<"\n";
    }

    return 0;
}