#include<simplecpp>

int t(int n)
{
 if(n==1)return 1;
 if(n==2)return 4;
 else{
  int k = t(n-1)-t(n-2);
  return k;
 }
}

