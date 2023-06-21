#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--)
	{
		long long int n;
		cin>>n;

		long long int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];

        long long int res = 0;
        priority_queue<long long int> pq;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] != 0) pq.push(arr[i]);
            else
            {
                if(pq.empty()) continue;
                res += pq.top();
                pq.pop();
            }
        }
        cout<<res<<"\n";
	}

    return 0;
}