#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,mini=INT_MAX,maxi=INT_MIN,l=0,r=0;
   vector<int>v;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int ele;
       cin>>ele;
       v.push_back(ele);
       if(mini>=ele)
       {
           mini=ele;
           l=i;
       }
   }
    for(int i=n-1;i>=0;i--)
   {
       
       if(maxi<=v[i])
       {
           maxi=v[i];
           r=i;
       }
   }

   int res=0;
   if(r>l)
   { 
      l=n-1-l;
      res=l+r-1;
   }
   else
   {
       l=n-1-l;
       res=l+r;
   }
   cout<<res;
}
