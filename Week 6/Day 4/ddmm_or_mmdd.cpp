#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        if(stoi(s.substr(0,2)) <= 12 && stoi(s.substr(3,5)) <= 12) cout<<"BOTH";
        else if(stoi(s.substr(0,2)) > 12) cout<<"DD/MM/YYYY";
        else cout<<"MM/DD/YYYY";
        cout<<"\n";
    }   

    return 0;
}