#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n,mini=INT_MAX,res=0,cnt=0;
cin>>n;
for(long long int i=1;i<=n;i++)
{
    int ele;
    cin>>ele;
    if(ele < mini)
    {  cnt=1;
        mini=ele;
        res=i;
    }  
    else if(ele==mini)
    {
        cnt++;
    }
}
if(cnt==1)
cout<<res;
else
cout<<"Still Rozdil";

}
