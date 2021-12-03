#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,c1=0,n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==-1)
        {
            c--;
            if(c<0)
            {
                c1++;
            }
        }
        else if(a==1)
        {
            c++;
        }
    }
    cout<< c1;
}
