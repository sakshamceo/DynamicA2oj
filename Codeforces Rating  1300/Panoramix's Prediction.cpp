#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
  for(int i=2;i<=sqrt(n);i++)
    {
      if(n%i==0)
      {
        return false;
      }
    }
  return true;
}
int main()
{
    int n,m,f=0,c=0;
    cin>>n>>m;
  for(int i = n+1;i<=m;i++)
    {
      if(isprime(i))
      {
        f=i;
        c++;
        break;
      }
    }
    if(c==0)
    {
        cout<<"NO";
    }
    else
    {
        if(f==m)
        {
            cout<<"YES";
        }
        else{cout<<"NO";}
    }
}
