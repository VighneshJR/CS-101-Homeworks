#include<simplecpp>
int prime_check(int k)
 {
  if(k==2)
  return 1;
  else
  {
   int div = 2,fc=0;
   while(div < k)
    {
     if(k%div==0)
     fc =fc +1;
     div++;
    }
    if(fc == 0)
    return 1;
    else
    return 0;
  }
 }
bool mersenne(int n)
{
 if(n==1)
  return false;
 if(prime_check(n)==0)
 return false;
 else
  {
  bool d= true;
  n=n+1;
   while(n>1)
   {
   if(n%2==1)
   d=false;
   n=n/2;
   }
   return d;
  }
}
