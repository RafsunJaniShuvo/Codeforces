#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,tot=0,sum=0,count=1;
    cin>> m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        tot+=arr[i];
    }
    sort(arr,arr+m);
    for(int i=m-1;i<m;i--)
    {
        sum+=arr[i];
            if(sum>=(tot/2+1))
            {
                cout<< count<< endl;
                return 0;
            }
            else

            {
                count++;
            }
    }
    return 0;
}
