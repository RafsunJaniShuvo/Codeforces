#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>> a;
    string b="hello";
    int x=0,y=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[x])
        {
            x++;
            y++;
        }
    }
    if(y==5)
    {
        cout<< "YES"<< endl;
    }
    else
    {
        cout<< "NO"<< endl;
    }
    cout<< 1%2;
    return 0;

}
