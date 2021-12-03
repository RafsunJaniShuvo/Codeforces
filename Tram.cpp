#include<iostream>
using namespace std;
int main()
{
    int passenger=0,capacity=0;
    int a,b,n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>> a >> b;
        passenger=b-a+passenger;
        if(passenger>capacity)
        {
            capacity=passenger;
        }

    }
    cout<< capacity << endl;
}
