#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    char arr[100];
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }

    }
    cout<< count <<endl;
}
