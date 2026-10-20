#include <iostream>
using namespace std;
 
int main()
{
 /*
If in the first iteration x is taken as input and I paste two values of x at the same time,
cin will take only the first value and do all the work with it.
If I print x, that output is fixed forever.
The second value of x stays in the input buffer.
When the next cin >> x comes, x changes to the second value,
but the first output is NOT forgotten or changed.
Flow:
Take input -> Solve -> Print -> Take next input -> Solve -> Print
 
"in normal you press enter code is executed but code dont show
out put because it waits for more input if you have to use like 
this below and dont have to see cout till whole input you basiclly add 
next line prompt in cin in order so you have not to enter to execute 
out put will be in the mind and will be displayed after final enter"
*/
 
 
int n;
cin>>n;
 
while(n>0)
{
  int x;
  cin>>x;      
 int arr[x];
 
 for(int i=0;i<x;i++)
 {
  cin>>arr[i];
 }
 
   for(int i=0;i<x;i++)
   {

    if(arr[0]==arr[1] )  /*to skip the case of odd at one place*/
    {
        if(arr[i]==arr[i+1])
    {
      continue;
    }
    else{
      cout<<i+2<<endl;
      break;
    }

   }

   else if(arr[0]!=arr[1] && arr[1]==arr[2])
   {
     cout<<"1"<<endl;
     break;   
   }
   else
   {
    cout<<"2"<<endl;
    break;
   }
  }
   n--;
    
}
 
 
  }
