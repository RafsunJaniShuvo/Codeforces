#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    int l=s.length();
    int j=s.length()-1;
    int count=0;
    for(int i=0; i<l; i++)
    {

        if(s[i]==t[j])
        {
            j--;
            count++;
        }
    }
    if(l==count)
    {
        cout<< "YES"<< endl;
    }
    else
    {
        cout<< "NO"<< endl;
    }
}
