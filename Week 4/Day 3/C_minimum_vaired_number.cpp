#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int s;
        cin >> s;

        vector<int> v;

        int temp = 9;

        while (s - temp > 0)
        {
            v.push_back(temp);
            s -= temp;
            temp--;
        }

        if(s != 0) v.push_back(s);

        reverse(v.begin(), v.end());
        for(int i = 0; i<v.size(); i++) cout<<v[i];
        cout<<"\n";
    }

    return 0;
}