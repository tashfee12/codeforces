#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int mini=a;
    int maxx=a;

    if(b<mini)mini=b;
    if(b>maxx)maxx=b;

    if(c<mini)mini=c;
    if(c>maxx)maxx=c;

    cout<<mini<<" "<<maxx<<endl;



}
