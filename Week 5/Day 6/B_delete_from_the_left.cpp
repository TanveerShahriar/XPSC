#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;

    int l1 = s.size(), l2 = t.size();

    int idx = 0;

    while (idx < min(l1, l2))
    {
        if(s[l1 - idx - 1] == t[l2 - idx - 1]) idx++;
        else break;
    }

    cout<< l1 - idx + l2 - idx;     

    return 0;
}