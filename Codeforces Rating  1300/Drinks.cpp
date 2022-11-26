#include <bits/stdc++.h>
using namespace std;
int main() {
 double n,sum=0;
   cin>>n;
   for(int i=0;i<n;i++)
   { double ele;
      cin>>ele;
       sum=sum+ele;
   }
   n=n*100.0;
   double r = sum/n;
   cout<<scientific<<r*100;
}
