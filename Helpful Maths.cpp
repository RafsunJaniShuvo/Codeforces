#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
   char arr[100];
   int c=0;
   string s;
   cin>>s;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='+')
       {
            continue;
       }
       else
        {
        arr[c]= s[i];

        c++;
       }
   }

   sort(arr,arr+c);
   for(int i=0;i<c;i++)
   {
      cout<<arr[i];
      if(i==c-1)
      {
          break;
      }
      else{
        cout<< "+";
      }
   }
return 0;

}
