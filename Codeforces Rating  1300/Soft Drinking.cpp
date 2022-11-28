#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int res=k*l;
res=res/nl;
int res2=c*d;
int res3=p/np;
int mini=min(res,res2);
cout<<min(mini,res3)/n;
}
