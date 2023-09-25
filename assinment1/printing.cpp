#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    b = (a/2) + 1;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if(i == j)
            {
                if(i == b)
                {
                  cout<<"X";
                }

                else
                {cout<<"\\";}
            }

            else if(j== (a+1)-i)
            {
                cout<<"/";
            }

            else{cout<<" ";}

        }

        cout<<endl;

    }
    return 0;
}