#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--)
	{
		int m,s;
		cin>>m>>s;

		vector<int> l(m);
		int sum = 0;
		for(int i = 0; i < m ; i++) 
		{
			cin>>l[i];
			sum += l[i];
		}

		int ma = * max_element(l.begin(), l.end());

		int temp = (ma*(ma+1) / 2) - sum;

		while(temp<s)
		{
			ma += 1;
			temp += ma;
		}

		if (temp == s) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}

    return 0;
}