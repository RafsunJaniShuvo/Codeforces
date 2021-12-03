#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }

    for(int i=0;i<n;i++)
    {
         count=0;
        for(int j=0;j<n;j++)
        {

            if(arr[i]==arr[j])
            {
               count++;


            }
        }


         if(count==1)
        {
            cout<< arr[i]<< endl;
        }


    }
    return 0;
}
