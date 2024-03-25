
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    string a="hello";
    int j=0;

    for(int i=0;i<s.size();i++)

    {
        if(s[i]==a[j])
            j++;

    }
    if(j==5)
    {
        cout<<"YES";

    }
    else
        cout<<"NO";

}
