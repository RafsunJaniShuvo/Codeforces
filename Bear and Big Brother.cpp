#include<iostream>
using namespace std;
int main()
{

    int a ,b,count=0;
    cin>> a>>b;
    while(1)
    {
        if(a<=b)
        {
            a=a*3;

            b=b*2;

            count++;
        }
        else{
            break;
        }

    }
    cout<< count << endl;
}
