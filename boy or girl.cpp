#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n;
    int c=0;
    int r;

    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
           {
              r++;
           }

    }
    if(r%2==0)
    {
        cout<<"CHAT WITH HER!";

    }
    else
    {
        cout<<"IGNORE HIM!";
    }






}
