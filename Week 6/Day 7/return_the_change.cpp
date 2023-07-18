#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        if(n % 10 == 0){}
        else if(n % 10 <= 4) n -= n % 10;
        else
        {
            n -= n % 10;
            n += 10;
        }

        cout<< 100 - n<<"\n";
    }

    return 0;
}