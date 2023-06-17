#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int arr[4];
        int count = 0;

        for(int i = 0; i < 4; i++) cin>>arr[i];

        for(int j:arr) if(j > arr[0]) count++;
        cout<<count<<"\n";
    }

    return 0;
}