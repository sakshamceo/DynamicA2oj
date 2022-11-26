#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    vector<int>v;
   cin>>s;
   for(int i=0;i<s.length();i+=2)
   {
      v.push_back(int(s[i]));
   }
   sort(v.begin(),v.end());
   int p=0;
    for(int i=0;i<s.length();i+=2)
   {
      s[i]=(char)v[p++];
   }
  cout<<s;
}
