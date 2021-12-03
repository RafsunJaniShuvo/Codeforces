#include<iostream>
using namespace std;
int main()
{
    int a,b,d,c=0;
    cin>>a>>b;
    if(a>b)
    {
        d=b;
        for(int i=0;i<b;i++)
        {
            d--;
            a--;
            c++;
        }
        a=a/2;
        cout<< c << " "<< a << endl;



    }
    else if(a<b)
    {
       d=a;
        for(int i=0;i<a;i++)
        {
            d--;
            b--;
            c++;
        }
        b=b/2;
        cout<< c << " "<< b << endl;
    }
    else if(a==b)
    {
        cout<< a << " "<< '0' << endl;
    }
}
