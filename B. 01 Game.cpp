
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0;
    string s;
    cin >>n;
    for(int a =0; a<n; a++)
    {


        cin >> s;
        int len= s.length();
        for(int i=0; i<len; i++)
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

        int ans = min(c,d);
        c=0;
        d=0;
        if(ans%2==0)
        {
            cout<< "NET"<<endl;
        }
        else
        {
            cout<< "DA"<<endl;
        }
    }
    return 0;
}
