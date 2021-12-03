#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,arr[1000];
    cin>>t;
    read:
    while(t--)
    {
        cin>> n;
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                cout<< "NO"<< endl;
                goto read;
            }
        }
        cout<< "YES"<< endl;
    }
    return 0;
}
