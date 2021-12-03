#include<iostream>
using namespace std;
int main()
{
    int n,c=0,c1=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    if(c>c1)
    {
        cout<< "Anton"<<endl;
    }
    else if(c==c1)
    {
        cout<< "Friendship"<<endl;
    }
    else
    {
        cout<< "Danik"<<endl;

    }
    return 0;
}
