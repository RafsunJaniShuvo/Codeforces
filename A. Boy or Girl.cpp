#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    for(int i=0; i<s.length(); i++)
    {

        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c%2==1)
    {
        cout<< "IGNORE HIM!";
    }
    else
    {
        cout<< "CHAT WITH HER!";
    }
    return 0;
}
