#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=0;
    char ch[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
     for(int i=0;i<n;i++)
    {
       int j = n-1;
       if(ch[j]!=ch[i])
       {
           f++;
       }
       j--;
    }
    cout<<f;

    
}
