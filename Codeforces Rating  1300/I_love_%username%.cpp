#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
       int ele;
       cin>>ele;
       v.push_back(ele);
    }
    int maxi=v[0],mini=v[0],cnt=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]>maxi)
        {
            maxi=v[i];
            cnt++;
        }
        else if(v[i]<mini)
        {
            mini=v[i];
            cnt++;
        }
    }
    cout<<cnt;
}
