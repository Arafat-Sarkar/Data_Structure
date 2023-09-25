#include<bits/stdc++.h>
using namespace std;
int main( )
{
    long long int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    bool ans = 0;
    for(int i = 0; i < n-1; i++){
        if ( v[i] == v[i+1] ){
            ans=1;
            break;
        }
    }
    if(ans) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
   
}