#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;


   while(1)
   {
       int dgt=n%10;
      if(dgt!=4&&dgt!=7)
        break;
        cout<<"NO";

   }
   for(int i=0;i<=n;i++)
   {
       if((n%i)==0)
       {
           cout<<"YES";
       }

   }



}
