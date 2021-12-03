#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[3],avg=0,total=0;
    for(int i=0;i<3;i++)
    {
        cin >>x[i];
    }
    int n = sizeof(x) / sizeof(x[0]);
     sort(x, x + n);
    total = abs(x[0]-x[1])+abs(x[1]-x[2]);

   cout<< total << endl;

}
