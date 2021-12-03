#include<iostream>
using namespace std;
int main()
{

    int n,count=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a+2<=b)
        {
            count++;
        }
    }
    cout<< count<< endl;
    return 0;
}
