#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool binary(long long int t)
{
     int s=1;
     long long int e=t;
    long long int mid=s+((e-s)/2);

    while(s<=e)
    {
        if(mid*mid==t)
        {
            return true;
        }
        else if(mid*mid>t)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }

        mid=s+((e-s)/2);


    }
    return false;




}





int main()
{

    int n;
    cin>>n;

    while(n!=0)
    {

       int a;
       cin>>a;
       long long int sum=0;

       for(int i=0;i<a;i++)
       {
        long long int  b;
        cin>>b;
        sum=sum+b;
       }

    if(binary(sum))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    n--;
   }

    

    

}