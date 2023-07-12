#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>>a[i];

        int idx = 0;
        while (idx < n)
        {
            int nxt = min_element(a.begin() + idx, a.end()) - a.begin();
			int el = a[nxt];
			a.erase(a.begin() + nxt);
			a.insert(a.begin() + idx, el);
			if (idx == nxt) idx = nxt + 1;
			else idx = nxt;
        }

        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout<<"\n";  
    }
       
    return 0;
}