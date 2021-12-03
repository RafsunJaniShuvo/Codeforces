#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,re,c=0;
    cin>> n;
    while(re!=0)
    {


        if(n>=100)
        {
            re=n%100;
            n=n/100;
            c=c+n;

            n=re;


        }
        else if(n>=20 && n<100)
        {
            re= n%20;
            n=n/20;
            c=c+n;

            n=re;


        }
        else if(n>=5 && n<20)
        {
            re= n%5;
            n=n/5;
            c=c+n;

            n=re;

        }
            else if(n>=1 && n<5)
            {
                re= n%1;
                n=n/1;
                c=c+n;



            }

        }
        cout<< c;
        return 0;

    }
