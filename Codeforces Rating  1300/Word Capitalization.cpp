#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    char c=toupper(s.at(0)); //pehla word toupper('A')
    cout<<c;
    for(int i=1;i<s.length();i++)
    {
        cout<<s[i];
    }
  
}
