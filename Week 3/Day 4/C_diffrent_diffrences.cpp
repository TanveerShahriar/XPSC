#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int k,n;
        cin>>k>>n;

        int temp = n - k;

        int c = 0, sum = 0;
        while (sum <= temp)
        {
            c++;
            sum += c;
        }
        
        int start = 1, inc = 2;
        cout<<start<<" ";

        for(int i = 2; i <= c; i++)
        {
            start += i;
            cout<<start<<" ";
        }

        for(int i = 0; i < k - c; i++)
        {
            start += 1;
            cout<<start<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}