#include<iostream>
using namespace std;
int main()
{

    int n,x,a[100],count=0;
    cin >>n>> x;
    for(int i=0;i<n;i++)
    {
        cin>> a[i];


    }
    for(int i=0;i<n;i++)
    {

        if(a[i]>0 && a[i]>=a[x-1])
        {
            count++;
        }
    }
    cout<< count<< endl;
}
