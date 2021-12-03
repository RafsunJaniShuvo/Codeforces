#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    //scanf("%lld %lld", &n, &k);
    ll main[n],arr[n],c=1;


    for(ll i=1; i<=n; i++)
    {
        main[i]=i;

        if(main[i]%2!=0)
        {

            arr[c]=main[i];
            c++;
        }
    }

    for(ll i=1; i<=n; i++)
    {
        if(main[i]%2==0)
        {
            arr[c]=main[i];

            c++;

        }
    }

      cout<< arr[k]<< endl;


    return 0;
}
