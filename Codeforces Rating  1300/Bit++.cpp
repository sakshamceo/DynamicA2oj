#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x=0;
cin>>n;
for(int j=0;j<n;j++)
{   int f=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
      if(s.at(i)=='+')
      {
         f=1;
         break;
      }
      else if(s.at(i)=='-')
      {
          break;
      }
    }
    if(f==0)
    {
        x--;
    }
    else if(f==1)
    {
        x++;
    }
}
cout<<x;
}