#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int key, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key) return i;
    }
    return -1;
}

int search(vector<int> arr, int key, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key) return i;
    }
    return -1;
}

int main() {
	int t;
    cin >> t; 

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n][n - 1];

        for(int i = 0; i < n; i++) for(int j = 0; j < n - 1; j++)
        {
            cin>>arr[i][j];
        }

        vector<int> v, temp;
        for(int i = 0; i < n - 1; i++)
        {
            v.push_back(arr[0][i]);
            temp.push_back(arr[0][i]);
        }

        sort(temp.begin(), temp.end());

        int a = 1;
        for(int i = 1; i <= n - 1; i++)
        {
            if(i == temp[i - 1]) a++;
            else break;
        }

        set<int> t;
        
        for(int i = 1; i < n; i++)
        {
            int idx = search(arr[i], a, n - 1);
            if(idx != -1 && idx != 0)
            {
                t.insert(arr[i][idx-1]);
            }
        }

        int dst = 0;
        for(auto elem:t)
        {
            int idx = search(v, elem, n-1);
            dst = max(dst, idx);
        }

        if(t.size() == 0)
        {
            cout<< a << " ";
            for(int i = 0; i < n - 1; i++) cout<<v[i] <<" ";
        }
        else
        {
            for(int i = 0; i <= dst; i++) cout<<v[i] <<" ";
            cout<<a<<" ";
            for(int i = dst + 1; i < n - 1; i++) cout<<v[i]<<" ";
        }

        cout<<"\n";
    }
    
    return 0;
}