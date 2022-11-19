https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    string st;
    int c=0;
    cin>>st;
    for(int i=0;i<st.length()-1;i++)
    {
        if(st[i]=='.')
        {
            cout<<"0";
            c++;
        }
        else if(st[i]=='-')
        {
           if(st[i+1]=='.')
          {
              cout<<"1";
          }
          else
          {
              cout<<"2";
          }
          i++;
          c=c+2;
        }
    }
    if(c!=st.length())
    {
        cout<<0;
    }
    
    
    }
