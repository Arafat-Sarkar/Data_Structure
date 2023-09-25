#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {

        int t;
        cin >> t;
        a.push_back(t);
    }
    int m;
    cin >> m;
    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
       b.push_back(t);
    }

    vector<int> temp;
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {

        temp.push_back(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {

        temp.push_back(b[i]);
    }

    for (int i = x; i < a.size(); i++)
    {

        temp.push_back(a[i]);
    }

    a.clear();

    a = temp;

    for (auto i : a)
    {

        cout << i << " ";
    }
}
