#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
    for(int i=0;i<n;i++)
    {

        if(arr[i]==0)
        {
           continue;
        }
        else
        {

          cout<< "HARD"<< endl;
          return 0;
        }
    }
    cout<< "EASY"<< endl;

}
