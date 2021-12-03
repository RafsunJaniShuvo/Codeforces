#include<bits/stdc++.h>
using namespace std ;
 int main ()
 {

     int h =0;
     int n,a ,c=0;
     cin >>n ;

     for (int i=0; i<n ;i++)
     {
         cin>> a;
         if (a>0)
         {
             h=h+a;
         }
         else if(a==-1)
         {
             if (h>0)
             {
                 h=h+a;
             }
             else
             {

                 c++;
             }

         }
     }
     cout<< c <<endl;

     return 0;

 }
