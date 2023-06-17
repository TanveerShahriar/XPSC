#include<bits/stdc++.h>
using namespace std;

int count(string s)
{
    int cnt = 0;
    for(int i = 0; i < 6; i++)
    {
        if(s.substr(i,3) == "#.#") cnt++;
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        vector<string> arr(8);
        for(int i = 0; i < 8; i++) cin>>arr[i];

        for(int k = 0; k < 8; k++)
        {
            if(count(arr[k]) == 1)
            {
                cout<<k+2<<" "<<arr[k+1].find("#") + 1<<"\n";
                break;
            }
        }
    }

    return 0;
}