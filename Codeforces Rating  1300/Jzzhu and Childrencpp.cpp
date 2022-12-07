#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
queue<pair<int,int>>p;
for(int i=1;i<=n;i++)
{int ele;
cin>>ele;
p.push({i,ele});
}
int res=0;
while(!p.empty())
{
pair<int,int>x=p.front();
if(x.second <=m)
{
res=x.first;
p.pop();
}
else
 {
  p.push({x.first,x.second-m});
  p.pop();
 }
}
cout<<res;
}