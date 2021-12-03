#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int A[100],m ;
    cin>> m;

    for(int i=0; i<m; i++)
    {
        cin>> A[i];
    }

    for(int i=0; i<m; i++)
    {
        cout<< A[i]<< endl;
    }

    int a = max_element(A, A + m);
    int b =distance(A, min_element(A, A + m));
    cout<< a << " " << b;


    return 0;
}
