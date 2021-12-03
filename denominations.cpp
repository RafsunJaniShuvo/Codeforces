#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,r=0;
    cin>>n;
    while(n!=0)
    {
        if(n>100)
        {
            c+=n/100;
            r=n%100;
            n=r;
        }

        else if(n>20)
        {
             c+=n/20;
            r=n%20;
            n=r;
        }
        else if(n>10)
        {
             c+=n/10;
            r=n%10;
            n=r;
        }
        else if(n>5)
        {
             c+=n/5;
            r=n%5;
            n=r;
        }
        else if(n>1)
        {
             c+=n/1;
            r=n%1;
            n=r;
        }
    }
    cout<< c << endl;
}
