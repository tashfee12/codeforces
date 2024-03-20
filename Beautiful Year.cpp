#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;


    while(1)
    {
        n=n+1;
        b=n/1000;//1st
        c=(n/100)%10;//2nd
        d=(n/10)%10;//3rd
        a=n%10;//last
        if(b!=c&&b!=d&&b!=a&&c!=d&&c!=a&&d!=a)
        {
            cout<<n<<endl;
            break;
        }


    }






}
