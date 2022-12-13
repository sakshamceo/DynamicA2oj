#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,five=0,zero=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       if(a==5)
       {
         five++;
       }
       else if(a==0)
       {
         zero++;
       }
   }
   int r = floor(five / 9) * 9;

   if(zero==0)
   {
       cout<<-1;
   }
    else if(r==0)
   {
       cout<<0;
   }

   else
   {   
         for(int i=0 ; i<r ; i++)
       {
         cout<<5;
       }
        for(int i=0 ; i < zero ; i++)
      {
         cout<<0;
      }
   }
  
}
