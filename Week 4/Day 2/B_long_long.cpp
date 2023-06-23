#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n, c = 0;
        long long sum = 0;
        cin>>n;

        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            sum += abs(a);

            if(a < 0 && flag)
            {
                c++;
                flag = false;
            }
            if(a > 0) flag = true;
        }

        cout<<sum<<" "<<c<<"\n";
    }

    return 0;
}