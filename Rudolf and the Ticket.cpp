#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,m,n,k,x;
   cin>>t;
   vector<int>a,b;
   while(t--)
   {
       cin>>n>>m>>k;
       for(int i=0;i<n;i++)
       {
           cin>>x;
           a.push_back(x);
       }
       for(int i=0;i<m;i++)
       {
           cin>>x;
           b.push_back(x);
       }
       int c=0;

       for(int i=0;i<n;i++)
       {
           int s=0;
           for(int j=0;j<m;j++)
           {
               s=a[i]+b[j];
               if(s<=k)
                c++;
           }
       }
       cout<<c<<endl;
       a.clear();
       b.clear();
   }


}
