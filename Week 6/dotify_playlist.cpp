#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;

        vector<int> a;
        while (n--)
        {
            int m,li;
            cin>>m>>li;
            if(li == l) a.push_back(m);
        }
        
        if(a.size() >= k)
        {
            int sum = 0;
            sort(a.begin(), a.end());
            reverse(a.begin(), a.end());
            for(int i = 0; i < k; i++) sum += a[i];
            cout<<sum;
        }
        else cout<<-1;
        cout<<"\n";
    }   

    return 0;
}