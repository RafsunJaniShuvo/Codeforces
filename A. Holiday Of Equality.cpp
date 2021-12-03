#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        {
           count += arr[n-1]-arr[i];
        }
    }
    cout<< count;
    return 0;
}
