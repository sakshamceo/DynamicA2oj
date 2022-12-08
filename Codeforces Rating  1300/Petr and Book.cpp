#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,r=0,i=0;
    cin>>n;
   vector<int>v;
   for(int i=0;i<7;i++)
   {
       int a;
       cin>>a;
       v.push_back(a);
   }
   while(true)
   {
      n=n-v[i%7];
      if(n<0 || n==0)
      {   r=i%7;
          break;
      }
      i++;
   }
   cout<<r+1;
}
