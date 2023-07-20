#include <simplecpp>
void determine_error(int n)
 {
  int i=0;
  while(!(pow(2,i)<=n && pow(2,i+1)>n))
  {i++;}
  cout<<pow(2,i)<<" "<<n-pow(2,i);
 }
