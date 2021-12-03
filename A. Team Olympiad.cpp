#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1,v2,v3;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            v1.push_back(i);
        }
        else if(a==2)
        {
            v2.push_back(i);
        }
        else
        {
            v3.push_back(i);
        }
    }
    int x=v1.size();
    int y=v2.size();
    int z=v3.size();
    int mn= min(x,min(y,z));
    cout<< mn << endl;
    for(int i =0;i<mn;i++)
    {
        cout<< v1[i]+1<< " "<< v2[i]+1<< " "<< v3[i]+1<< endl;
    }
    return 0;

}
