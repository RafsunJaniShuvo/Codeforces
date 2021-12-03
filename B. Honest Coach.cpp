#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int t,n,arr[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }
        sort(arr,arr+n);

        int min=999;
        int z=0;
        for(int i = 1; i<=n-1; i++)
        {
            z=arr[i]-arr[i-1];
            if(min>z)
            {
                min= z;
            }


        }
         cout<< min <<  endl;
         min=0;
    }
    return 0;
}
