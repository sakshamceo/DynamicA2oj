#include <bits/stdc++.h>
using namespace std;
int main() {
 unordered_set<char>st;
 string s;
 cin>>s;
 for(int i=0;i<s.length();i++)
 {
   st.insert(s.at(i));
 }
if(st.size()%2==0)
{
    cout<<"CHAT WITH HER!";
}
else
{
    cout<<"IGNORE HIM!";
}
}
