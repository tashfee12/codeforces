#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
     long long int k;
    cin>>n;
    cin>>k;
    long long int r;
    if(n%2!=0)
    {
        r=(n+1)/2;
    }
    else
    {
       r= n/2;
    }
   if(k<=r)
   {
       cout<<(2*k)-1;
   }
        else
        cout<<2*(k-r);


}
