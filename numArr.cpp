#include<simplecpp>
 int comb(int n, int r)
{
 if(n==r||r==0)return 1;
 else
 {
  int k = n*comb(n-1,r-1)/r;
  return k;
 }
}
int numArr(int m, int n)
{
 return comb(m+n,m);
}

