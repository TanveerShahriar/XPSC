#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        string n;
        cin >> n;

        if((n[0] == 'Y' || n[0] == 'y') && (n[1] == 'E' || n[1] == 'e') && (n[2] == 'S' || n[2] == 's'))
        {
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<"\n";
    }

    return 0;
}