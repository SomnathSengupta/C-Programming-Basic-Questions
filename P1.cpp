#include<bits/stdc++.h>
using namespace std ;
int main()
{
  int num;
  auto sum=0;
  cin>>num;
  int dup=num;
  while(num>0)
  {
  auto d=num%10;
  num =num/10;
   sum=sum+d;
  
  }
  cout<<"Sum of digits of " << dup << " is: "<< sum; 
}