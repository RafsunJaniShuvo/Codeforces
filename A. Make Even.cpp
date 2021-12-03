#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l=0,i=0;
    string s;
    cin >> t;
    while(t--)
    {
        read:
        cin>>s;

        l=s.length();
        if(s[l-1]%2==0)
        {
            cout << 0 << endl;
            goto read;
        }
        while(i!=l)
        {
            swap(s[i],s[l--]);
        }
        cout<< s << endl;


    }


}
