#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n%2!=0)
    {
     cout<<"-1";
     return 0;
    }
   
    else
    {
         cout<<"2"<<" "<<"1"<<" ";
        for(int i=n;i>=3;i--)
        {
            cout<<i<<" ";
        }
    }
}
