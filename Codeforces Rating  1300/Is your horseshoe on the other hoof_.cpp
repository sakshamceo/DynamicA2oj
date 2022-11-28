#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int>s;
    for(int i=0;i<4;i++)
    {
        int ele;
        cin>>ele;
        s.insert(ele);
    }
    if(s.size()==4)
    {
        cout<<0;
    }
    else
    {
        cout<<4-s.size();
    }
}
