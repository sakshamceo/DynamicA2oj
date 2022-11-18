https://codeforces.com/problemset/problem/266/B

hume sabse pehle ek string milegi - BGGBG
agar B ke baad G aata hai to swap krdo t1 time pe.
fir ek baar or B and G ko swap krdo t2 time pe.

NOTE- Jab swap kro to i++ krdena
hume uss position pe firse swap ni krnaa isliye.
-------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    string ele;
    vector<char>s;
    cin>>n>>t;
    cin>>ele;
    for(int i =0;i<n;i++)
    { 
       s.push_back(ele.at(i));  //string ko array me daaldo
    }
    for(int i=0;i<t;i++)
    {
       for(int i =0;i<n-1;i++)
         { 
           if(s[i]=='B' && s[i+1]=='G') // B ke baad G only
           {
               swap(s[i],s[i+1]);
               i++;  //swap ke baaad jump one place
           }
        }
    }
     for(int i =0;i<n;i++)
    { 
      cout<<s[i];
    }
}
