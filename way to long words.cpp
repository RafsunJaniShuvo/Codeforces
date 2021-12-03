#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,l;
    cin >> n;
    for (int i =0;i<n;i++)
    {
        cin>> s;
        if(s.length()>10)
        {
            l=s.length();

            cout<< s[0]<< s.length()-2<< s[l-1]<< endl;
        }
        else
        {
            cout<< s << endl;
        }
    }
    return 0;


}
