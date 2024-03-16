#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string p;
    cin>>p;
    string z;
    z.resize(s.size());
    for(int i=0; i<s.size(); i++)
    {


        if(s[i]==p[i])
        {
            z[i]='0';


        }
        else
            z[i]='1';
    }
    cout<<z<<endl;

}


