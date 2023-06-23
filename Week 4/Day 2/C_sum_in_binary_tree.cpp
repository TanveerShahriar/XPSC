#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        long long int n, res = 0;
        cin >> n;

        while (n != 1)
        {
            res += n;
            n /= 2;
        }
        cout<<res + 1<<"\n";
    }

    return 0;
}