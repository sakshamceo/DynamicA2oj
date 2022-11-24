#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,i=0;
    cin>>n;
    while(n!=0)
    {
      if(n%10==7 || n%10==4)
      {
          i++;
      }
      n=n/10;
    }
    if(i==7 || i==4)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   
}
