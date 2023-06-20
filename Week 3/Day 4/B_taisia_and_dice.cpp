#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t; 
    while (t--)
    {
        int n,s,r;
        cin>>n>>s>>r;

        int mx = s - r;

        vector<int> v;

        while (r > mx)
        {
            v.push_back(mx);
            r -= mx;
        }

        int temp = n - 1 - v.size();

        if (r >= temp)
        {
            int a = r / temp;
            for(int i = 0; i < temp - 1; i++) v.push_back(a);
            v.push_back(r - (a * (temp - 1)));
        }
        else
        {
            int def = temp - r;
            int idx = 0;

            while(def)
            {   
                v[idx]--;
                def--;

                if(v[idx] == 1) idx++;
            }

            for(int i = 0; i < temp; i++) v.push_back(1);
        }

        v.push_back(mx);
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
        cout<<"\n";
    }
    
    return 0;
}