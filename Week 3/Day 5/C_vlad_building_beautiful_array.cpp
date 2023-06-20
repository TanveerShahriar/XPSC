#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> odd, even;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >>a;
            if(a % 2) odd.push_back(a);
            else even.push_back(a);
        }


        if(odd.size() == 0 || even.size() == 0) cout<<"YES";
        else if (*min_element(odd.begin(), odd.end()) < *min_element(even.begin(), even.end()))
        {
            cout<<"YES";
        }
        else cout<<"NO";

        cout<<"\n";
    }
    
    return 0;
}