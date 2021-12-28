#include<bits/stdc++.h>
using namespace std;
//50
//2 2 3 4 5 4 4 5 7 3 2 7

int main()
{
    int n,sum=0,c=0;
    cin>>n;
    int arr[100];
    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12);


    if(n==0)
    {
        cout<< 0;
        return 0;
    }
    else if(n>0)
    {
        for(int j=11; j>=0; j--)
        {
            //cout<< arr[j]<< endl;
            sum=sum+arr[j];

            c++;
            //cout<<"value of sum"<< sum << "value of c:" << c <<  endl;
            if(sum>=n)
            {
                cout<< c ;
                break;
            }

            //cout<<arr[j] << " ";
        }
        if(sum<n)
            {
                cout<< -1;
            }
    }


    return 0;
}
