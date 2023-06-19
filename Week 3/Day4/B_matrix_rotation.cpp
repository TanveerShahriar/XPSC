#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c, int d)
{
    if(a < b && d < c && a < d && b < c) return true;
    return false;
}

int main() {
	int t;
    cin >> t; 

    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>d>>c;

        bool flag = false;
        flag = check(a, b, c, d) || flag;
        flag = check(d, a, b, c) || flag;
        flag = check(c, d, a, b) || flag;
        flag = check(b, c, d, a) || flag;

        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    
    return 0;
}