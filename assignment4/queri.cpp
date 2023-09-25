#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
   queue<char>qe;
   int q;
   cin>>q;
   while(q--)
   {
    if( q==0)
    {
        qe.push(s);
    }
    else if (q==1)
    {
        qe.pop();
    }
    while (!qe.empty())
    {
        cout<<"Invalid";
    }
    
   }
    return 0;
}