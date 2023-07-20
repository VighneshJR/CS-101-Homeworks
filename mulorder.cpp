#include<simplecpp>

int catalan(int n)
 {
  if(n==0)return 1;
  if(n==1)return 1;
  else{
   int k =0;
   for(int i=0;i<=n-1;i++){k=k+(catalan(i)*catalan(n-i-1));}
   return k;
  }
 }
int ways(int n)
{
 int val;
 val = catalan(n-1);
 return val;
}
