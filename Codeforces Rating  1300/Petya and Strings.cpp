#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int f=0;
    for(int i=0;i<s1.length();i++)
    {
        if(tolower(s1.at(i))>tolower(s2.at(i)))
        {
            cout<<1;
            f++;
            break;
        }
        else if(tolower(s1.at(i))<tolower(s2.at(i)))
        {
            cout<<-1;
            f++;
            break;
        }
        else if(tolower(s1.at(i))==tolower(s2.at(i)))
        {
           continue;
        }
    }
    if(f==0)
    {
        cout<<0;
    }
    
}