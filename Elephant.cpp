#include<iostream>
using namespace std;
int main()
{


    int n,tot=0,rem=0,count=0;
    cin >>n;
    if(n==1 || n==2 || n==3 || n==4 || n==5 )
    {
        cout << "1"<< endl;

    }
    else
    {
        if(n>5)
        {
            tot=n/5;
            count=tot;
            rem=n%5;
            if(rem==4)
            {
                count++;
            }
            else if(rem==3)
            {
                count++;
            }
            else if(rem==2)
            {
                count++;
            }
            else if(rem==1)
            {
                count++;
            }



        }
        cout<< count << endl;
    }


return 0;
}
