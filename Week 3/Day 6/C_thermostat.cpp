#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--)
	{
		int l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;

        if(a == b) cout<<0;
        else if(abs(a - b) >= x) cout<<1;
        else if(r - max(a,b) >= x || min(a,b) - l >= x) cout<<2;
        else if((r - b >= x && a - l >= x) || (r - a >= x && b - l >= x)) cout<<3;
        else cout<<-1;
        cout<<"\n";
	}

    return 0;
}