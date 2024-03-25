#include<bits/stdc++.h>
#include<string>
#include<iostream>


using namespace std;
 int main()
 {
    string s,s1;
    cin>>s;
    for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')
            {
                continue;
            }
            else
                s1=+'.';
                s1=+tolower(s[i]);
    }
    cout<<s1;
 }
