#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=0; i<s.length();i++)
    {
        if(s.at(i)>=33 && s.at(i)<=126)
        {if(s.at(i)=='H' || s.at(i)=='Q' || s.at(i)=='9')
        {
            cout<<"YES";
            return 0;
        }}
    }
    cout<<"NO";
}
