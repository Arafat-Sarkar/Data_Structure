#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        set<int> s;

        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            s.insert(x);
        }
         vector<int>v;
        for (auto it = s.begin(); it != s.end(); it++) 
        {
            // cout << *it << " ";
            v.push_back(*it);
            
        }
        reverse(v.begin(), v.end()); 
        for(int num : v) 
        {
         cout<<num<<" ";
        } 
        cout << endl;
    }

    return 0;
}
