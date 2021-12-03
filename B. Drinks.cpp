#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,total=0,a;
    cin >>n;


    for(int i=0;i<n;i++)
    {
        cin >>a;
        total=total+a;
    }
    cout<< setprecision(15) <<(total/n)<< endl;
}
