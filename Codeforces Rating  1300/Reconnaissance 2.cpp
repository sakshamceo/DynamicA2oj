#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,f=0,mini=INT_MAX,r1=0,r2=0;
vector<int>v;
cin>>n;
 for(int i=0;i<n;i++)
 {  
 int a;
 cin>>a;
 v.push_back(a);
 }

 for(int i=0;i<n;i++)
 {
     if(abs(v[i]-v[(i+1) % n])<mini)
     {
         mini=abs(v[i]-v[(i+1) % n]);
         r1=i;
         r2= (i+1) % n;
     }
 }
cout<<r1+1<<" "<<r2+1;

}