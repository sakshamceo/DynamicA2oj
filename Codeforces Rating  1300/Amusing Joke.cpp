#include <bits/stdc++.h>
using namespace std;
int main() {
 string s,s1,s3;
 vector<char>v;
 vector<char>v2;
 cin>>s>>s1>>s3;
 for(int i = 0;i<s.length();i++)
 {
     v.push_back(s.at(i));
 }
 for(int i = 0;i<s1.length();i++)
 {
     v.push_back(s1.at(i));
 }
  for(int i = 0;i<s3.length();i++)
 {
     v2.push_back(s3.at(i));
 }
  sort(v.begin(),v.end());
  sort(v2.begin(),v2.end());
   if(v==v2) cout<<"YES";
   else cout<<"NO";
}
