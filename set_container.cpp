#include <iostream>
#include <set>
using namespace std;
 
int main()
{

  string a;
  int count=0;
  cin>>a;
  set<char> s;  //if character is inserted declare char not string
  for(int i=0;a[i]!='\0';i++)
  {
      s.insert(a[i]);
  }

  for(int x :s)
  {
    count++;
  }

  if(count%2!=0)
  {
    cout<<"IGNORE HIM!";
  }
  else
   cout<<"CHAT WITH HER!";



 
  
}

  
