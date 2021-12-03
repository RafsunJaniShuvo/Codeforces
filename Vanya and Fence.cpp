#include<iostream>
using namespace std;
int main()
{
    int a,b,c,tot=0;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>c;
        if(b>=c)
        {
           tot=tot+1;
        }
        else
        {
            tot=tot+2;
        }
    }
    cout<< tot<< endl;

}
