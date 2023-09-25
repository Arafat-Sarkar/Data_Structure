#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while ( t--)
   {
     int n;
     cin>>n;
     vector <int> v(n);
     for( int i=0; i<n; i++)
     {
        cin>>v[i];
     }
     int flag = 1; 
      for ( int i=0; i<n-1; i++)
     {
        if(v[i+1] < v[i])
        { 
            flag =0;
            break;
        }
     }
     if( flag==1)
     {
        cout<<"YES"<<endl;
     }
     else  
     {
        cout<<"NO" <<endl;
     }
     
   }
    
    return 0;
}