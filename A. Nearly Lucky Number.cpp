#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int c=0,n=0,y=0;
    string s;
    cin>> s ;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='7')
        {
            c++;
        }
        else if(s[i]=='4')
        {
            n++;
        }
    }
    y=c+n;

    if(y==4 || y==7)
    {
        cout<< "YES";
    }
    else{
       cout<< "NO";
    }
    return 0;
}
