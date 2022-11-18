#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   int sumx=0,sumy=0,sumz=0;
   cin>>t;
   while(t--)
   {
       int x,y,z;
       cin>>x>>y>>z;
       sumx=sumx+x;
       sumy=sumy+y;
       sumz=sumz+z;
   }
   if(sumz!=0 || sumy!=0 || sumx!=0)
   {
       cout<<"NO";
   }
   else
   {
       cout<<"Yes";
   }
}
