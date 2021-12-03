#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{
    int n;

    string a;
    int c=0;

    getline (cin, a);
    int k=a.length();
    if (k==1)
    {
        cout << a << endl;
        return 0;
    }
    n=k-1;
   char  arr[100];
    for (int i=0; i<k; i++)
    {
        if (a[i]!='+')
        {
            arr[c]=a[i];
            //cout<<arr[c]<< endl;
            c++;
        }
    }
    //cout<< c << endl;



    //int l= sizeof(arr)/sizeof(0);
    sort(arr,arr+c);
   /* for (int i=0; i<c; i++)
    {
        cout <<arr[i];
    }*/
    for (int i=0; i<c; i++)
    {
        if(i==c-1)
        {
            cout<< arr[c-1];
        }
        else{
            cout<< arr[i]<< "+";
        }
    }


}
