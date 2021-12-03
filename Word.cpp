#include<iostream>
using namespace std;
int main()
{
    int c=0,C=0;
    string s;
    cin>> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            c++;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            C++;
        }
    }

    if(C>c)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;

            }
        }
        cout<< s;

    }
    else if(c>C)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;


            }
        }
        cout<< s;

    }
    else if(c==C)
    {
         for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;


            }
        }
        cout<< s;

    }
    return 0;
}
