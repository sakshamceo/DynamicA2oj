https://codeforces.com/problemset/problem/263/A


#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>>v(5,vector<int>(5,0));
    int x,y;
    for(int i=0;i<v.size();i++)
    { for(int j=0;j<v[0].size();j++)
      {
        cin>>v[i][j];
        if(v[i][j]==1)
        {
          x=i;
          y=j;
        }
      }
    }
    cout<<abs(x-2)+abs(y-2);
 
}
