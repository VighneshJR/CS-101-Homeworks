#include<simplecpp>
int safe_seating(int n)
{
 if(n==0)return 1;
 if(n==1)return 2;
 if(n==2)return 3;
 else{
 int k = safe_seating(n-1)+safe_seating(n-3);
 return k;
 }
}
