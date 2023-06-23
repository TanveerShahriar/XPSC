#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        string s1, s2;
        cin>> s1 >> s2;

        int sz1 = s1.size() - 1, sz2 = s2.size() - 1;
        char res;
        if(s1[sz1] == 'L' && (s2[sz2] == 'M' || s2[sz2] == 'S'))
        {
            res = '>';
        }
        else if(s2[sz2] == 'L' && (s1[sz1] == 'M' || s1[sz1] == 'S'))
        {
            res = '<';
        }
        if(s1[sz1] == 'S' && (s2[sz2] == 'M' || s2[sz2] == 'L'))
        {
            res = '<';
        }
        else if(s2[sz2] == 'S' && (s1[sz1] == 'M' || s1[sz1] == 'L'))
        {
            res = '>';
        }
        else if(s1[sz1] == 'M')
        {
            if(s2[sz2] == 'L') res = '<';
            else if(s2[sz2] == 'S') res = '>';
            else res = '=';
        }
        else if(s2[sz2] == 'M')
        {
            if(s1[sz1] == 'L') res = '>';
            else if(s1[sz1] == 'S') res = '<';
            else res = '=';
        }
        else if(s1[sz1] == 'S' && s2[sz2] == 'S')
        {
            if(sz1 > sz2) res = '<';
            else if (sz1 == sz2) res = '=';
            else res = '>';
        }
        else 
        {
            if(sz1 > sz2) res = '>';
            else if (sz1 == sz2) res = '=';
            else res = '<';
        }
        


        cout<<res<<"\n";
    }

    return 0;
}