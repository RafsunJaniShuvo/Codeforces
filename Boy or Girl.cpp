#include<iostream>
using namespace std;
int main()
{
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=1;j<=s.length();j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
    }

}
