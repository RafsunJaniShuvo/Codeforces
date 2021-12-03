#include<iostream>
using namespace std;
int main()
{
    int x,k;
    cin >> x>>k ;
    for(int i=0;i<k;i++)
    {
        if(x%10==0)
        {
            x=x/10;

        }
        else
        {
            x=x-1;

        }

    }
                cout << x << endl;
    return 0;
}
