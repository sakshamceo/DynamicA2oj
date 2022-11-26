#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,lz=0,lo=0,rz=0,ro=0;
   vector<pair<int,int>>p;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int left,right;
       cin>>left>>right;
     p.push_back(make_pair(left,right));
   }
   for(auto x:p)
   {
       if(x.first==0)
       {
           lz++;
       }
       if(x.first==1)
       {
           lo++;
       }
   }
      for(auto x:p)
   {
       if(x.second==0)
       {
           rz++;
       }
       if(x.second==1)
       {
           ro++;
       }
   }
   cout<<min(ro,rz)+min(lo,lz);
}
