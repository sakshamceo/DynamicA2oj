#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,m;
    cin>>n>>m;
    for(int i=0;i<n.length();i++)
    {
        if(n.at(i)==m.at(i))
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }
}
