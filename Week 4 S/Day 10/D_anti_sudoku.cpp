#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                char c;
                cin>>c;
                if(c == '2') cout<<1;
                else cout<<c;
            }
            cout<<"\n";
        }
    }

    return 0;
}