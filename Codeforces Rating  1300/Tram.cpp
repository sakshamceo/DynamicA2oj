#include <iostream>
using namespace std;
int main() {
   int n,sum=0,maxi=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       sum=sum-a+b;
       maxi=max(sum,maxi);
   }
   cout<<maxi;
}
