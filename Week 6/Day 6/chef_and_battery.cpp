#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int c = 0;
        while (n != 50)
        {
            if(n < 50) n += 2;
            else n -= 3;
            c++;
        }
        cout<<c<<"\n";
    }

    return 0;
}