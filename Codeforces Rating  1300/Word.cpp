#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int l=0,u=0;
    cin>>s;
    for(int i=0 ; i<s.length() ;i++)
    {
        int n;
        n=s.at(i);
        if(n>=97 && n<=122)
        {
            l++;
        }
       else if(n>=65 && n<=90)
        {
            u++;
        }
    }
    if(u>l)
    {
       transform(s.begin(),s.end(),s.begin(),::toupper);
       cout<<s;
    }
     else if(l>u)
    {
       transform(s.begin(),s.end(),s.begin(),::tolower);
       cout<<s;
    }
    else
    {
         transform(s.begin(),s.end(),s.begin(),::tolower);
       cout<<s;
    }
}
