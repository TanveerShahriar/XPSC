#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;
        long long res=1;
        for(int i=0;i<n;i++){
            res=(res*k)%1000000007;
            if(k>=2) k--; 
        }
      cout<<res<<endl;
    }   

    return 0;
}