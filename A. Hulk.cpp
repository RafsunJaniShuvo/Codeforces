#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i%2==1)
        {
            cout<< "I hate ";
        }
        else
        {
            cout<< "I love ";
        }
        if(i==a)
        {
            cout<< "it ";
        }
        else{
            cout<< "that ";
        }
    }
    return 0;

}


