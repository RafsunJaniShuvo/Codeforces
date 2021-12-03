#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    if(s1==s2 && s2==s3 && s3==s4 )
    {
        cout<< 3<< endl;
    }
    else if(s1!=s2 && s2!=s3 && s3==s4 )
    {
        cout<< 1 << endl;
    }
    else if(s1!=s2 && s2==s3 && s3!=s4 )
    {
        cout<< 1 << endl;
    }
    else if(s1!=s2 && s2==s3 && s3==s4)
    {
        cout<< 2<< endl;
    }
    else if(s1!=s2 && s2!=s3 && s3!=s4 && s2==s4)
    {
        cout<< 1<< endl;
    }
    else if(s1!=s2 && s2==s3 && s3!=s4)
    {
        cout<< 1<< endl;
    }

    else{
        cout<< 0 << endl;
    }


return 0;

    }


