#include<bits/stdc++.h>
using namespace std;

pair<vector<int>, int> merge(vector<int>& a, vector<int>& b, int c) {
    vector<int> new_arr;
    int n = a.size();
    int m = b.size();
    int idx1 = 0;
    int idx2 = 0;
    int cnt = 0;

    while (idx1 < n || idx2 < m) {
        if (idx1 == n) {
            new_arr.push_back(b[idx2]);
            idx2++;
        } else if (idx2 == m) {
            new_arr.push_back(a[idx1]);
            idx1++;
        } else if (a[idx1] < b[idx2]) {
            new_arr.push_back(a[idx1]);
            idx1++;
        } else {
            new_arr.push_back(b[idx2]);
            idx2++;
            cnt += n - idx1;
        }
    }
    return make_pair(new_arr, cnt + c);
}

pair<vector<int>, int> mergeSort(const vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return make_pair(arr, 0);
    } else {
        int mid = n / 2;
        pair<vector<int>, int> a1 = mergeSort(vector<int>(arr.begin(), arr.begin() + mid));
        pair<vector<int>, int> a2 = mergeSort(vector<int>(arr.begin() + mid, arr.end()));
        int c = 0;
        if (a1.first.size() > 1) {
            c += a1.second;
        }
        if (a2.first.size() > 1) {
            c += a2.second;
        }
        return merge(a1.first, a2.first, c);
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