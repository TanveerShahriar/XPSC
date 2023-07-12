#include<bits/stdc++.h>
using namespace std;

pair<vector<int>, int> merge(vector<int>& a, vector<int>& b) {
    vector<int> new_arr;
    int n = a.size();
    int m = b.size();
    int idx1 = 0;
    int idx2 = 0;
    int cnt = 0;

    while (idx1 < n && idx2 < m) {
        if (a[idx1] <= b[idx2]) {
            new_arr.push_back(a[idx1]);
            idx1++;
        } else {
            new_arr.push_back(b[idx2]);
            idx2++;
            cnt += n - idx1;
        }
    }

    while (idx1 < n) {
        new_arr.push_back(a[idx1]);
        idx1++;
    }

    while (idx2 < m) {
        new_arr.push_back(b[idx2]);
        idx2++;
    }

    return make_pair(new_arr, cnt);
}

pair<vector<int>, int> mergeSort(const vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return make_pair(arr, 0);
    } else {
        int mid = n / 2;
        pair<vector<int>, int> a1 = mergeSort(vector<int>(arr.begin(), arr.begin() + mid));
        pair<vector<int>, int> a2 = mergeSort(vector<int>(arr.begin() + mid, arr.end()));
        pair<vector<int>, int> merged = merge(a1.first, a2.first);
        return make_pair(merged.first, a1.second + a2.second + merged.second);
    }
}

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        cout<<mergeSort(arr).second<<"\n";
    }

    return 0;
}
