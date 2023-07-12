#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int n, q;
    cin >> n >> q;

    set<int> row, col;
    while (q--)
    {
        int t;
        cin>>t;

        if(t == 1)
        {
            int x, y;
            cin>>x>>y;
            row.insert(x);
            col.insert(y);
        }
        else if(t == 2)
        {
            int x, y;
            cin>>x>>y;
            row.erase(x);
            col.erase(y); 
        }
        else 
        {
            int x1, x2, y1, y2;
            cin>>x1>>y1>>x2>>y2;

            bool flag = true;
            for(int i = x1; i <= x2; i++) if()
        }
    }
    

    return 0;
}