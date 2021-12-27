
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0;
    string s;
    cin>>n;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if(c>d)
    {
        cout<< c-d;
    }
    else

    {
         cout<< d-c;
    }
  return 0;
}
