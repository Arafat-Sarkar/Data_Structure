#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> s;
    void push(int val)
    {
        s.push_back(val);
    }
    void pop()
    {
        s.pop_back();
    }
    int top()
    {
        return s.back();
    }
    int size()
    {
        return s.size();
    }
    bool empty()
    {
        if( s.size()==0) return true;
        else return  false;
    }
 };
   class myQueue
   {
       public:
      list <int> q;
      void push(int val)
      {
        q.push_back(val);
      }
      void pop()
      {
        q.pop_front();
      }
      int front()
      {
        return q.front();
      }
      int size()
      {
        return q.size();
      }
      bool empty()
      {
        if ( q.size() == 0) return true;
        else return false;
      }


   };
int main()
{
    myStack st;
    myQueue qe;
    int x;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        int n;
        cin>>n;
        st.push(n);
    }
    while (! st.empty())
    {
        
        // if(st.top() == qe.front())
        // {
        //    cout <<"YES";
        // }
        // else {
        //   cout<< "NO";
        // }
        st.pop();
    }

    int y;
    cin>>y;
    for(int i=0; i<y; i++)
    {
        int m;
        cin>>m;
        qe.push(m);
    }
    while (! qe.empty())
    {
        
          if(st.top() == qe.front())
        {
           cout <<"YES";
        }
        else {
          cout<< "NO";
        }
        qe.pop();
    }
    // if ( st.size() == qe.size())
    // {
    //     cout<<"YES";
    // }
    // else {
    //     cout<<"NO";
    // }
    return 0;
}